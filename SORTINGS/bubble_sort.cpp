#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MERGE_SORT
{
    public:
    void doSort(vector <int> &nums,int s,int e)
        {
            if(s==e)
                return;

            int mid=s+(e-s)/2;

            doSort(nums,s,mid);
            doSort(nums,mid+1,e);

            doMerge(nums,s,mid,mid+1,e);
        }

    void doMerge(vector<int> &nums,int sfp,int efp,int ssp,int esp)
        {
            int i=sfp,j=ssp;
            int m=efp,n=esp;
            vector<int> temp;


            while(i<=m && j<=n)
            {
                if(nums[i]<nums[j])
                    temp.push_back(nums[i++]);

                else
                    temp.push_back(nums[j++]);
            }

            for(int k=i;k<=m;k++)
                temp.push_back(nums[k]);

            for(int k=j;k<=n;k++)
                temp.push_back(nums[k]);

            for(int k=0;k<temp.size();k++)
            {
                nums[sfp+k]=temp[k];
            }
            temp.clear();
        }

    void show(vector <int> nums)
        {
            for(auto val:nums)
                cout<<val<<endl;
        }

};
int main()
    {
        vector <int> nums={10,54,845,56,7845,0};
        MERGE_SORT obj;
        obj.doSort(nums,0,nums.size()-1);
        obj.show(nums);
    }
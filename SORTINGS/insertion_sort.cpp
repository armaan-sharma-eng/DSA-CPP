#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void doSort(vector <int> &ary)
    {
        for(int i=1;i<ary.size();i++)
            {
                int temp=ary[i];
                int j=i-1;

                while(j>=0&&temp<ary[j])
                    {
                        ary[j+1]=ary[j];
                        j--;
                    }
                ary[j+1]=temp;
            }

        cout<<endl<<"SORTED ARRAY: "<<endl;
    }

void show(vector <int> ary)
    {
        for(auto val:ary)
            cout<<val<<endl;
    }

int main()
    {
        vector<int> ary={10,40,70,5,50};
        show(ary);
        doSort(ary);
        show(ary);
    }
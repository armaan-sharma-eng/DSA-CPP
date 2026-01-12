#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void doSort(vector <int> &ary)
    {
        for(int i=0;i<ary.size();i++)
            {
                for(int j=i;j<ary.size();j++)
                    {
                        if(ary[i]>ary[j])
                            swap(ary[i],ary[j]);
                    }
            }

        cout<<"\nSORTED ARRAY: \n";
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

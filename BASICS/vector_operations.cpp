#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void show(vector<int> ary)
    {
        cout<<"\n-------------------------\n";
        for(auto val:ary)
            {
                cout<<val<<endl;
            }
    }
int main()
    {
        vector <int> ary;
        cout<<ary.capacity()<<"    "<<ary.size()<<endl;

        ary.push_back(60);
        ary.push_back(40);
        ary.push_back(30);
        ary.push_back(50);
        ary.push_back(80);
        ary.push_back(20);
        
        cout<<ary.capacity()<<"    "<<ary.size()<<endl;
        show(ary);

        //----------------------

        auto max=max_element(ary.begin(),ary.end());   //max_element is present in algorithm
        cout<<"\nmax value: "<<*max<<endl;

        auto min=min_element(ary.begin(),ary.end());   //mix_element is present in algorithm
        cout<<"\nmin value: "<<*min<<endl;

        //------------------------

        sort(ary.begin(),ary.end());
        show(ary);     //sort is present in algorithm

        //------------------------

        reverse(ary.begin(),ary.end());
        show(ary);

        //---------------------------

        int n;
        cout<<"Enter wanted value: ";
        cin>>n;
        if(find(ary.begin(),ary.end(),n)==ary.end())
            cout<<"\nnot found\n";
        else
            cout<<"\nfound\n";

        //-------------------------------

        auto ptr=find(ary.begin(),ary.end(),n);
       
        ;


    }

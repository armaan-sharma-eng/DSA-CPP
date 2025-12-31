#include <vector>
using namespace std;
#include <iostream>

bool check(vector <int> ary,int N)
    {
        if(N==0)  
            return true;
            
        if(ary[N]<ary[N-1])
            return false;

        bool rcv=check(ary,N-1);
        return rcv;
            
    }

int main()
    {
        vector<int> ary={1,2,1,4,5};
        
        bool res=check(ary,ary.size()-1);
        if(res==true)
            cout<<"sorted"<<endl;
        else
            cout<<"unsorted"<<endl;        
    }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find(vector <int> &arr,int N)
    {
        if(N==-1)
            return INT_MIN;

        int greatest=find(arr,N-1);
        greatest=max(greatest,arr[N]);
        return greatest;
    }
int main()
    {
        vector <int> arr={1,2,34,43,3};

        cout<<endl<<find(arr,arr.size()-1);
    }
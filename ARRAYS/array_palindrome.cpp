#include <iostream>
using namespace std;

class ARRAY
    {
        int *ary,N;
        public: 

        ARRAY(int N)
        {
            ary=new int[N];
            this->N=N;
        }
        void setvalue()
            {
                cout<<"Enter values:"<<endl;
                for(int i=0;i<N;i++)
                    {
                        cin>>ary[i];
                    }
            }

        int check()
            {
                for(int i=0;i<N/2;i++)
                    {
                        if(ary[i]!=ary[N-1-i])
                        return 0;
                    }
                return 1;    
            }    
    };        

int main()
    {
        int N;
        cout<<"Enter number of elements: ";
        cin>>N;

        ARRAY obj(N);
        obj.setvalue();
        if(obj.check())
            cout<<"this is a palindrome\n";
        else
            cout<<"this is not a palindrome\n";
        
    }    

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
                for(int i=0;i<N;i++)
                    {
                        for(int j=i+1;j<N;j++)
                            {
                                if(ary[i]==ary[j])
                                return ary[i];
                            }
                    }

                cout<<"\nno element is repeating";     
            }    
    };

int main()
    {
        int N;
        cout<<"Enter number of elements: ";
        cin>>N;

        ARRAY obj(N);
        obj.setvalue();
        int x=obj.check();
        cout<<x<<" is repeating";
    }    
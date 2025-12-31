#include <iostream>
using namespace std;

class ARRAY
    {
        int *ary,N;
        int m1,m2;
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

        void check()
            {
                m1=INT_MIN;
                m2=INT_MIN;

                if(m2==INT_MIN)
                    {
                        cout<<"2nd largest element does not exist";
                        return;
                    }

                for(int i=0;i<N;i++)
                    {
                        if(ary[i]>m1)
                            {
                                m2=m1;
                                m1=ary[i];
                            }

                        if(ary[i]>m2&&ary[i]<m1)
                            m2=ary[i];    
                    }
                cout<<m2<<" is our 2nd largest value";            
            }    

    };  
    
int main()
    {
        int N;
        cout<<"Enter number of elements: ";
        cin>>N;

        ARRAY obj(N);
        obj.setvalue();
        obj.check();
        
    }
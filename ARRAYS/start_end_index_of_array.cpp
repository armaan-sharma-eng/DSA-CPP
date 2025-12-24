#include <iostream>
using namespace std;

class ARRAY
    {
        int *ary,N,wanted,count=0,*ptr;
        public: 

        ARRAY(int a[],int N,int w)
        {
            ary=new int[N];
            ary=a;
            this->N=N;
            wanted=w;
        }
        
        void check()
            {
                for(int i=0;i<N;i++)
                    {
                        if(ary[i]==wanted)
                            {
                                static int idx=i;
                                ptr=&idx;
                                count++;
                            }
                    }
                    cout<<"start index is: "<<*ptr<<endl;
                    cout<<"End index is: "<<*ptr+count-1;
            }
    };

int main()
    {
        int N,wanted;
        cout<<"Enter number of elements: ";
        cin>>N;
        int ary[N];

        cout<<"Enter values:"<<endl;
            for(int i=0;i<N;i++)
                {
                    cin>>ary[i];
                }

        cout<<"\nEnter wanted value: "        ;
        cin>>wanted;

        ARRAY obj(ary,N,wanted);
        obj.check();
    }

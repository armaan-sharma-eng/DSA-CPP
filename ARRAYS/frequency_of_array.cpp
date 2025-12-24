#include <iostream>
using namespace std;

class ARRAY
    {
        int *ary,*b,*f,count,N;
        public: 

        ARRAY(int N)
        {
            ary=new int[N];
            this->N=N;
            b=new int [N];
            f=new int [N];
        }
        void setvalue()
            {
                cout<<"Enter values:"<<endl;
                for(int i=0;i<N;i++)
                    {
                        cin>>ary[i];
                        b[i]=-1;
                    }
            }

        void freq()
            {
                for(int i=0;i<N;i++)
                    {
                        if(b[i]==-1)
                        {
                                count=1;
                                for(int j=i+1;j<N;j++)
                                {
                                    if(ary[i]==ary[j])
                                        {
                                            count++;
                                            b[j]=0;
                                        }
                                }
                            }
                            f[i]=count;
                    }
            }  
            
        void show()
            {
                cout<<"\n\nElements and its frequency are: "<<endl;
                for(int i=0;i<N;i++)
                    {
                        if(b[i]==-1)
                        cout<<ary[i]<<"  "<<f[i]<<endl;
                    }
            }    
    };    

int main()
    {
        int N;
        cout<<"Enter number of elements: ";
        cin>>N;
        ARRAY obj(N);
        obj.setvalue();
        obj.freq();
        obj.show();
    }    


/*int main()
{
    int a[5]={2,2,2,5,5};
    int f[5];
    int b[5]={-1,-1,-1,-1,-1};
    
    for (int i=0;i<5;i++)
    {
        int count=1;
        if(b[i]!=-1)
        continue;
        
        for(int j=i+1;j<5;j++)
        {
                    if (a[i]==a[j])
                    {
                        b[j]=0;
                        count++;
                    }
                    
                }
                f[i]=count;
            }
            for(int i=0;i<5;i++)
                {
                    if(b[i]==-1)
                    cout<<a[i]<<"   "<<f[i]<<endl;
                }
    }
*/ 

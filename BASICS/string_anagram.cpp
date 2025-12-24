#include <iostream>
using namespace std;

class anagram
    {
        string str1,str2;
        int len1,len2,i,j,count=0;
        int *b1,*f1;
        public:

        anagram(string s1,string s2)
            {
                str1=s1;
                str2=s2;
            }
        
        int length()
            {
                for(len1=0;str1[len1]!='\0';len1++);
                for(len2=0;str2[len2]!='\0';len2++);
                //cout<<len1<<"\t"<<len2<<endl;
                int b[len1],f[len1];
                int x=find_frequency(b,f);
                return x;                
            }

        int find_frequency(int b[],int f[])
            {
                for(i=0;i<len1;i++)
                {
                    b[i]=-1;
                }

                for(i=0;i<len1;i++)
                {
                    count=1;
                    if(b[i]==0)
                    continue;

                    for(j=i+1;j<len1;j++)
                    {
                        if(b[i]==-1)
                        {
                            if(str1[i]==str1[j])
                                {
                                    count++;
                                    b[j]=0;
                                }
                        }        
                    }
                    f[i]=count;
                }

                for(i=0;i<len1;i++)
                    {
                        if(b[i]==-1)
                        //cout<<str1[i]<<"  "<<f[i]<<endl;
                    }

                int x=check(b,f);  
                return x;  
            }    

        bool check(int b[],int f[])
            {
                if(len1!=len2)
                return false;

                for(i=0;i<len2;i++)
                    {
                        count=0;
                        if(b[i]==-1)
                        {

                            for(j=0;j<=len2;j++)
                                {
                                        if(str1[i]==str2[j])
                                        count++;
                                }     
                            if(count!=f[i])
                            return false;   
                        } 
                    }
                return true;    
            }    
    };

int main()
    {
        string s1,s2;
        cout<<"Enter string 1: ";
        cin>>s1;
        cout<<"Enter string 2: ";
        cin>>s2;
        
        class anagram obj(s1,s2);
        int x=obj.length();
        cout<<endl<<endl<<x<<endl;
        if(x)
            {
                cout<<"yes this string is anagram\n";
            }
        
        else
        {
            printf("no this string is not anagram");
        }    
    }
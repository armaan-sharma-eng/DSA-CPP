#include <iostream>
using namespace std;

class anagram
    {
        string str1,str2;
        int len1,len2,i,j,count=0;
        public:

        anagram(string s1,string s2)
            {
                str1=s1;
                str2=s2;
            }
        
        void length()
            {
                for(len1=0;str1[len1]!='\0';len1++);
                for(len2=0;str2[len2]!='\0';len2++);
                cout<<len1<<"\t"<<len2<<endl;
            }    

        bool check()
            {
                if(len1!=len2)
                return false;

                for(i=0;i<len1;i++)
                    {
                        for(j=0;j<=len2;j++)
                            {
                                if(str1[i]==str2[j])
                                    count++;
                            }
                        if(count!=i+1)
                        return false;    
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
        obj.length();
        if(obj.check())
            {
                cout<<"yes this string is anagram\n";
            }
        
        else
        {
            printf("no this string is not anagram");
        }    
    }
#include <iostream>
using namespace std;

class ARRAY
    {
        int *ary,cap;
        int cursor= -1 ;
        public:
        ARRAY(int N)
            {
                ary=new int[N];
                cap=N;
            }

        void show()
            {
                cout<<"\n==========\n";
                for(int i=0;i<=cursor;i++)
                    {
                        cout<<ary[i]<<", ";
                    }
            }
            
        void push_back(int val)
            {
                if(cursor==cap-1)
                    {
                        cout<<"\nARRAY FULLLLL\n";
                        return;
                    }
                cursor++;
                ary[cursor]=val;
                show();
            }    

        int top()
            {
                return ary[cursor];
            }  
            
        int pop_back()
            {
                int val=ary[cursor];
                cursor--;
                return val;
            }    
    };

int main()
    {
        ARRAY obj(5);
        obj.push_back(10);
        obj.push_back(20);
        obj.push_back(30);
        obj.push_back(40);
        obj.push_back(50);
        obj.push_back(60);
        obj.push_back(70);
        obj.push_back(80);
        obj.push_back(90);

        cout<<"\nLast value of array is: "<<obj.top();
        int lval=obj.pop_back();
        cout<<"\npoped value = "<<lval;
    }    
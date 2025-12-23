#include <iostream>
using namespace std;

template <class t1,class t2>

class print
    {
        t1 x;
        t2 y;
        public:

        void setvalue(t1 a,t2 b)
            {
                x=a;
                y=b;
            }

        void show()
            {
                cout<<x<<"    "<<y<<endl;
            }    
    };

int main()
    {
        print <int,char> obj1;
        obj1.setvalue(5,65);
        obj1.show();

        print <char,float> obj2;
        obj2.setvalue('c',7.2);
        obj2.show();
    }
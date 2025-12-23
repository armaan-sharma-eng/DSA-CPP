#include <iostream>
using namespace std;

template <class t>

class swaping
    {
        t a,b,temp;
        public:

        void setvalue(t a,t b)
            {
                this->a=a;
                this->b=b;
            }
        
        void doswap()
            {
                temp=a;
                a=b;
                b=temp;
            }
        
        void show()
            {
                cout<<a<<"  "<<b;
            }
    };

int main()
    {
        swaping <int> obj;
        obj.setvalue(5,6);
        obj.doswap();
        obj.show();
    }
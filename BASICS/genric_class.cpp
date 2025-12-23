#include <iostream>
using namespace std;

template <class T>

class swapping
    {
        T a,b,temp;
        public:

        void setvalue(T a,T b)
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
        swapping <int> obj;
        obj.setvalue(5,6);
        obj.doswap();
        obj.show();
    }
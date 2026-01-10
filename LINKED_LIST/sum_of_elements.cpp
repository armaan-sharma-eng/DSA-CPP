#include <iostream>
using namespace std;

class NODE
{
    public:
    int info;
    NODE* next;

    NODE(int val)
    {
        info=val;
    }
};

int doSum(NODE* ptr)
    {
        if(ptr==NULL)
            return 0;

        int rcv=doSum(ptr->next);
            return rcv+ptr->info;
    }

int main()
    {
        NODE* head=NULL;
        NODE n1(10),n2(20),n3(40);
        n1.next=&n2;
        n2.next=&n3;
        n3.next=NULL;
        head=&n1;
        cout<<doSum(head);

    }
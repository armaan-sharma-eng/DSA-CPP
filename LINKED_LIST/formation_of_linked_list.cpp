#include <iostream>
using namespace std;

class NODE
{
    public:
    int info;
    NODE *next=NULL;

    NODE(int val)
    {
        info=val;
    }
};
class linkedList
{
    public:
    void show(NODE* head)
            {
                NODE *ptr=head;
                while(ptr!=NULL)
                    {
                        cout<<ptr->info<<"->";
                        ptr=ptr->next;
                    }
                    cout<<"NULL";
            }

    bool isPresent(NODE *ptr,int wanted)
            {
                if(ptr==NULL)
                    return false;

                if(ptr->info==wanted)
                    return true;

                bool rcv=isPresent(ptr->next,wanted);
                    return rcv;
            }

    NODE *getAddress(NODE *ptr,int wanted)
            {
                if(ptr==NULL)
                    return NULL;

                if(ptr->info==wanted)
                    return ptr;

                NODE *rcv=getAddress(ptr->next,wanted);
                    return rcv;
            }

    void doInsert(NODE* head,int wanted,int newvalue)
        {
            NODE* ptr=head;
            while(ptr!=NULL)
                {
                    if(wanted==ptr->info)
                    break;

                    ptr=ptr->next;
                }
            if(ptr==NULL)
            {
                cout<<"element not found";
                return;
            }

            NODE *nn=new NODE(newvalue);
            nn->next=ptr->next;
            ptr->next=nn;
            show(head);
        }
};

int main()
    {
        NODE *head=NULL;
        NODE n1(10),n2(20),n3(30);
        n1.next=&n2;
        n2.next=&n3;
        n3.next=NULL;
        head=&n1;

        linkedList obj;
        obj.show(head);

        cout<<endl<<obj.isPresent(head,20);

        cout<<endl<<obj.getAddress(head,50)<<endl;

        obj.doInsert(head,50,25);

    }
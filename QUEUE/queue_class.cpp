#include <iostream>
using namespace std;

class QUEUE
{
    public:
    int *qary;
    int f=-1,r=-1;
    int size;

    QUEUE(int n)
    {
        size=n;
        qary=new int[n];
    }

    void show()
    {
        cout<<"f="<<f<<endl;
        cout<<"r="<<r<<endl;
        for(int i=0;i<size;i++)
            cout<<qary[i]<<"->";

        cout<<endl<<endl;
    }

    bool isEmpty()
    {
        return (r==-1&&f==-1);
    }
    
    bool isFull()
    {
        return (f==(r+1)%size);
    }

    void doEnqueue(int val)
    {
        if(isFull())
        {
            cout<<"QUEUE IS FULL!!";
            return;
        }

        if(isEmpty())
        {
            r++;
            f++;
            qary[r]=val;
            show();
            return;
        }

            r=(r+1)%size;
            qary[r]=val;
            show();
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"already empty!!"<<endl;
            return;
        }
        if(f==r)
        {
            qary[f]=0;
            f=r=-1;
            return;
        }

        qary[f]=0;
        f=(f+1)%size;
    }


};

int main()
    {
        QUEUE obj(5);
        obj.show();
        obj.doEnqueue(10);
        obj.dequeue();
        obj.doEnqueue(20);
        obj.doEnqueue(30);
        obj.doEnqueue(40);
        obj.doEnqueue(50);
        obj.dequeue();
        obj.doEnqueue(60);
    }
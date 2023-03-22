#include<bits/stdc++.h>
using namespace std;
int arr[10],front=-1,rear=-1;
void Insert(int x)
{
    if((front==0&&rear==9)||(front==rear+1))
        cout << "Queue Full" << endl;
    else
    {
        if(front==-1&&rear==-1)
        {
            front++;
            rear++;
        }
        else if(rear==9)
            rear=0;
        else
            rear++;
        arr[rear]=x;
    }
}
void Delete()
{
    if(front==-1&&rear==-1)||()
        cout << "Queue Empty" << endl;
    else
    {
        if(front==0&&rear==0)
        {
            front--;
            rear--;
        }
        else if(front==9)
            front=0;
        else
        {
            front++;
        }
    }
}
int main()
{
    int o;
    while(1)
    {
        cout << "1.Insert\t2.Delete\t3.Exit" << endl;
        cin >> o;
        if(o==1)
        {
            cout << "Enter a Number: ";
            int x;
            cin >> x;
            Insert(x);
        }
        else if(o==2)
        {
            Delete();
            cout << "Deleted" << endl;
        }
        else
            break;
        cout << front << " " << rear << endl;
    }
}

#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//Using Circular array

struct queue1
{
    int capacity,size=0;
    int *arr;
    int front,rear;
    
    queue1(int c)
    {
        capacity=c;
        arr=new int[capacity];
        front=0;
        rear=size-1;
        
    }
    bool isfull()
    {
        if(size==capacity)
        {
            return true;
        }
        return false;
    }
    bool isempty()
    {
        if(size==0)
        {
            return true;
        }
        return false;
    }
    void enqueue(int x)
    {
        if(isempty())
        {
            return;
        }
       int rear=getrear();
       rear=(rear+1)%capacity;
       arr[rear]=x;
       size++;
    }
    void dequeue()//O(N)
    {
        if(isempty())
        {
            return;
        }
        front=(front+1)%capacity;
        size--;
    }
    int getfront()
    {
        if(isempty())
        {
            return -1;
        }
        else{
            return 0;
        }
    }
    int getrear()
    {
        if(isempty())
        {
            return -1;
        }
        return size-1;
    }
    void display()
    {
        cout<<arr[getfront()];
    }
};

int main()
{
    queue1 q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);


    while(!q.isempty())
    {
        cout<<q.getfront();
        q.dequeue();
    }



}
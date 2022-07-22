#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct twostack
{
    int cap,top1,top2;
    int*arr;

    twostack(int x)
    {
        cap=x;
        top1=-1;
        top2=cap;

        arr=new int[cap];

    }

    void push1(int x)
    {
        if(top1<top2-1)
        {
            top1++;
            arr[top1]=x;
        }
        else{
            exit(1);
        }


    }
    void push2(int x)
    {
        if(top1<top2-1)
        {
            top2--;
            arr[top2]=x;
        }
        else{
            exit(1);
        }
    }
    void pop1()
    {
        if(top1>=0)
        {
            top1--;
        }
        else{
            exit(1);
        }

    }
    void pop2()
    {
        if(top2<cap)
        {
            top2++;

        }
        else{
            exit(1);
        }
    }
    void peek1()
    {
        if(top1==-1)
        {
            return;
        }
        cout<<arr[top1]<<endl;
    }
    void peek2()
    {
        if(top1==top2-1)
        {
            return;
        }
        cout<<arr[top2]<<" ";
    }

};

int main()
{
    twostack s(10);

    //first 5 elements in stack 1
    s.push1(1);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);

    //next 5 elements in stack 2

    s.push2(6);
    s.push2(7);
    s.push2(8);
    s.push2(9);
    s.push2(10);

    cout<<"Printing the stack 1"<<endl;

//Printing the stack 1
    while(s.top1!=-1)
    {
        s.peek1();
        //cout<<endl;
        s.pop1();
    }
// Printing the stack 2

cout<<"Printing the stack 2"<<endl;

while(s.top2-1!=s.cap-1)
    {
        
        s.peek2();
        cout<<endl;
        s.pop2();
    }

   




}
#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct mystack
{
    int top=-1;
    int *arr;
    int cap;

    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
    }
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    void pop()
    {
        top--;
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        return arr[top];
    }
    int getmin()
    {
        int mini=INT_MAX;
        int top1=top;
        while(top1!=-1)
        {
            mini=min(mini,arr[top1]);
            top1--;
        }
        return mini;
    }



};



int main()
{
    mystack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Minimum element in the stack "<<s.getmin()<<endl;




}
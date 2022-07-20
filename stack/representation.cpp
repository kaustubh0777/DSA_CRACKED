#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct mystack
{
    int top = -1;
    int capacity;
    int *arr;
    mystack(int c)
    {
        capacity = c;
        arr = new int[capacity];
        top = -1;
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    void pop()
    {
        int res = arr[top];
        top--;
        //return res;
    }
    int peek()
    {
        return arr[top];
    }
    bool isempty()
    {
        return (top == -1);
    }
    int size()
    {
        return top + 1;
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
   

    while(s.isempty()!=true)
    {
        cout<<s.peek()<<" ";
        s.pop();

    }
    cout<<endl;
    
}
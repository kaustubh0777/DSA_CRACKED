//Linked list implementation of stack

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct mystack
{
    node*head;
    int size;

    mystack()
    {
        head=NULL;
        size=0;
    }

    void push(int x)
    {
        node*temp=new node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Underflow"<<endl;
        }
        node*temp=head;
        head=head->next;

        delete(temp);
        size--;
    }
    int peek()
    {
        if(head==NULL)
        {
            return INT_MAX;
        }
        //node*temp=head;
        return head->data;
    }
    int size1()
    {
        return size;
    }
    bool isempty()
    {
        return(head==NULL);
    }

};
int main()
{
    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    while(s.isempty()!=true)
    {
        cout<<s.peek()<<endl;
        s.pop();
    }
    
}
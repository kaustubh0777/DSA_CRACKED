#include<bits/stdc++.h>
using namespace std;

struct node
{
    node*next;
    node*prev;
    int data;

    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void display(node*head)
{
    node*cur=head;

    do
    {
        cout<<cur->data<<" ";
        cur=cur->next;
        /* code */
    } while (cur!=head);

    cout<<endl;
    
}

int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);
    node*third=new node(40);

    head->next=first;
    head->prev=NULL;
    first->next=second;
    first->prev=head;
    second->next=third;
    second->prev=first;
    third->next=head;
    third->prev=head;

    display(head);
}
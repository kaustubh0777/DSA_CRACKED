#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*next;
    node*prev;

    node(int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void insertatend(node*head,int x)
{
    node*p=head;
    node*k=new node(x);

    while(p->next!=NULL)
    {
        p=p->next;

    }
    p->next=k;
    k->prev=p;
    k->next=NULL;
}
void display(node*head)
{

    node*p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);

    head->next=first;
    head->prev=NULL;

    first->next=second;
    first->prev=head;

    second->next=NULL;
    second->prev=first;

    cout<<"Enter the value to be added at the last"<<endl;
    int x;
    cin>>x;

    insertatend(head,x);
    display(head);

    
}
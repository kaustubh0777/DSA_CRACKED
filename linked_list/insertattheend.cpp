#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data=x;
        next=NULL;
    }
};

node *insertatend(node *head,int x)
{
    node*p=head;
    node*k=new node(x);

    while(p->next!=NULL)
    {
        p=p->next;
        
    }
    p->next=k;

    return head;
}
void display(node *new_head)
{
    while(new_head!=NULL)
    {
        cout<<new_head->data<<" ";
        new_head=new_head->next;
    }
}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);

    head->next = first;
    first->next = second;
    second->next = NULL;

    cout<<"Enter the value to be inserted at the end of the linkedlist"<<endl;
    int x;
    cin>>x;

    node*new_head=insertatend(head,x);

    display(new_head);
}
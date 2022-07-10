#include<bits/stdc++.h>
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

node*deletefirstnode(node *head)
{
    node*p=head;
    head=head->next;

    delete p;

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
    node *head=new node(10);
    node *first=new node(20);
    node *second=new node(30);

    head->next=first;
    first->next=second;
    second->next=NULL;

    node*new_head=deletefirstnode(head);
    display(new_head);
}
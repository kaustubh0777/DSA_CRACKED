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

node*removenthnode(node*head,int k)
{
    node*fast=head;
    node*slow=head;

    for(int i=1;i<=k;i++)
    {
        fast=fast->next;
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;

    }
    slow->next=slow->next->next;
    return head;
}
void display(node*head)
{
    node*cur=head;

    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }

}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);
    node *third = new node(40);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next=NULL;

    int k;
    cin>>k;

    removenthnode(head,k);
    display(head);
}
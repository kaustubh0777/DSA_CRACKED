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
        data = x;
        next = NULL;
    }
};
//10->20->30->NULL
void deletelastnode(node*head)
{
    node*k;
    node*p=head;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    k=p->next;
    p->next=NULL;
    delete k;
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

    deletelastnode(head);

    display(head);
}
#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
node*insertatbeg(node *head,int x)
{
    node*p=new node(x);

    head->prev=p;

    p->next=head;

    return p;

}
void display(node *head)
{
    node*p=head;
    
    cout<<"Printing in ascending"<<endl;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
   
}
int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);
    node *third = new node(40);

    head->next = first;
    head->prev = NULL;

    first->next = second;
    first->prev = head;

    second->next = third;
    second->prev = first;

    third->next = NULL;
    third->prev = second;

    cout<<"ENter the element to be inserted at the beginning of the doubly linked list"<<endl;
    int x;
    cin>>x;

    node*k=insertatbeg(head,x);
    display(k);
}
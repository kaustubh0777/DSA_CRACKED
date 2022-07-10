//A Simple representation of the linked list

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

void display(Node *head)
{
    Node *p=head;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    Node *head=new Node(10);
    Node *first=new Node(20);
    Node *second=new Node(30);


    head->next=first;
    first->next=second;
    second->next=NULL;

    display(head);



}
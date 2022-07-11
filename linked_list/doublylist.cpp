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

    third->next=NULL;
    third->prev=second;

    display(head);

}




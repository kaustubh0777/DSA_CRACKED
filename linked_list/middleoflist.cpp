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

node*findmid(node*head)
{
    node*fast=head;
    node*slow=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }

    return slow;
}

int main()
{
    struct node*head=new node(10);
    struct node*first=new node(20);
    struct node*second=new node(30);
    struct node*third=new node(40);

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;

    node*mid=findmid(head);

    cout<<mid->data<<endl;



}
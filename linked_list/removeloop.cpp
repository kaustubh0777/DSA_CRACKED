#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

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

void detectloop(node*head,node*slow,node*fast)
{
    int flag=0;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            //return true;
            flag=1;
            break;
        }

    }
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }

    fast->next=NULL;
    


}
void display(node*head)
{
    node*l=head;
    while(l!=NULL)
    {
        cout<<l->data<<" ";
        l=l->next;
    }
    cout<<endl;
}

int main()
{
    node*head=new node(1);
    node*first=new node(2);
    node*second=new node(3);
    node*third=new node(4);
    node*fourth=new node(5);
    node*fifth=new node(6);

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=second;

    node*slow=head;
    node*fast=head;

    detectloop(head,slow,fast);
    display(head);
}
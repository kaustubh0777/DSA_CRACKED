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

//10->20->30->40  ,25

void insertinsorted(node*head,int x)
{
    node*cur=head;
    node*k=new node(x);
    node*p;

    while(cur!=NULL)
    {
        if(cur->data<=x && cur->next->data>=x)
        {
            p=cur->next;
            cur->next=k;
            k->next=p;
        }
        cur=cur->next;

    }
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
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);
    node*third=new node(40);

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;

    cout<<"ENter the value you want to insert in the sorted linked list"<<endl;
    int x;
    cin>>x;
    insertinsorted(head,x);
    display(head);


}
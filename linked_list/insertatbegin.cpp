#include<bits/stdc++.h>
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

void insert(node *head,int val)
{
    node *p=new node(val);
    p->next=head;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }


}

int main()
{
    cout<<"ENter the element to be inserted at the beginning"<<endl;
    int x;
    cin>>x;

    node *head=new node(10);
    node *first=new node(20);
    node *second=new node(30);

    head->next=first;
    first->next=second;
    second->next=NULL;

    insert(head,x);
    cout<<endl;

    //displaying list with the help of  new head


}
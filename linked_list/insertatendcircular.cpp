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

void insertatend(node*head,int x)
{
    node*k=head;
    node*p=new node(x);

    do
    {
        k=k->next;
        /* code */
    } while (k->next!=head);

    k->next=p;
    p->next=head;


}

void display(node*head)
{

    node*l=head;

   do
   {
    cout<<l->data<<" ";
    l=l->next;
    /* code */
   } while (l!=head);
   
   cout<<endl;
}

int main()
{
    node*head=new node(10);
    node*first=new node(20);
    node*second=new node(30);


    head->next=first;
    first->next=second;
    second->next=head;

    cout<<"Enter the value to be added "<<endl;
    int x;
    cin>>x;

    insertatend(head,x);

    display(head);


}
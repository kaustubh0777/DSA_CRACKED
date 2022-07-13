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

//10->20->30->10

node*insertatbegin(node*head,int x)
{
    node*p=new node(x);
    p->next=head;
    node*k=head;

    do
    {
        k=k->next;

        /* code */
    } while (k->next!=head);

    k->next=p;

    return p;
}

void display(node*new_head)
{

    node*k=new_head;

   do
   {
    cout<<k->data<<" ";
    k=k->next;
    /* code */
   } while (k!=new_head);
   
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

    cout<<"Enter the new head value"<<endl;
    int x;
    cin>>x;

    node*new_head= insertatbegin(head,x);

    display(new_head);


}
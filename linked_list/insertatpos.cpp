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
        data = x;
        next = NULL;
    }
};

void insertatpos(node*head,int pos,int x)
{
    int k=0;
    node*p=head;
    node*ele=new node(x);
    node*l;
    

   while(p!=NULL)
   {
    if(k==pos-1)
    {
        l=p->next;
        p->next=ele;
        ele->next=l;

    }
    p=p->next;
    k++;
   }
   


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
    node *third = new node(40);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next=NULL;

    cout<<"Enter the position and element"<<endl;
    int pos,x;
    cin>>pos>>x;

    insertatpos(head,pos,x);
    display(head);



}
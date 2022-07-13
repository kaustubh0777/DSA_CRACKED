#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*next;
    node*prev;

    node(int x)
    {
        int data=x;
        next=NULL;
        prev=NULL;
    }
};

/*
1->2->3
3->2->1

*/

node*reverse(node*head)
{
   node*temp;
   node*cur=head;
   node*temp1=NULL;

   while(cur!=NULL)
   {
     temp=cur->next;
     cur->next=temp1;//first node points to null (3->2->1->NULL)
     cur->prev=temp;

     temp1=cur;
     cur=temp;

   }
   return temp1;

}
void display(node*k)
{
    node*p=k;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
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
    head->prev=NULL;
    
    first->next=second;
    first->prev=head;

    second->next=third;
    second->prev=first;

    third->next=NULL;
    third->prev=second;

    node*k=reverse(head);
    display(k);

}
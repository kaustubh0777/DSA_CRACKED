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

//10->20->30->40,K=2
//20->10->30->40



node*reversek(node*head,int x)
{
    node*cur=head;
    node*next=NULL;
    node*prev=NULL;

    int count=0;

    while(cur!=NULL && count<x)
    {
        next=cur->next;
        cur->next=prev;

        prev=cur;
        cur=next;
        count++;

    }
    if(cur!=NULL)
    {
        node*new_head=reversek(cur,x);
        head->next=new_head;
    }

    return prev;




}
void display(node*l)
{
    node*m=l;

    while(m!=NULL)
    {
        cout<<m->data<<" ";
        m=m->next;
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

    head->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    cout<<"Enter the value of k"<<endl;
    int x;
    cin>>x;

    node*l=reversek(head,x);

    display(l);
    

}
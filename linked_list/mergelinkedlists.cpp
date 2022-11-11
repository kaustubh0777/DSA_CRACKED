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

node*mergesortedlists(node*list1,node*list2)
{
    node*ptr;
    
    if(list1==NULL)
    {
        return list2;
    }
    if(list2==NULL)
    {
        return list1;
    }
     ptr=list1;
     if(list1->data>list2->data)
     {
        ptr=list2;
        list2=list2->next;
     }
     else
     {
        list1=list1->next;
     }
     node*cur=ptr;

     while(list1 && list2)
     {
        if(list1->data<list2->data)
        {
            cur->next=list1;
            list1=list1->next;
        }
        else
        {
            cur->next=list2;
            list2=list2->next;
        }
        cur=cur->next;
     }
     if(!list1)
     {
        cur->next=list2;
     }
     else{
        cur->next=list1;
     }

     return ptr;


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
    struct node*head1=new node(1);
    struct node*first1=new node(2);
    struct node*second1=new node(4);

    head1->next=first1;
    first1->next=second1;
    second1->next=NULL;

    struct node*head2=new node(1);
    struct node*first2=new node(3);
    struct node*second2=new node(4);

    head2->next=first2;
    first2->next=second2;
    second2->next=NULL;

    node*new_head=mergesortedlists(head1,head2);
    display(new_head);




}
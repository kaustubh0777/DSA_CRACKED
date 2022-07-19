#include <bits/stdc++.h>
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

node*segregate(node*head)
{
    node*evenstart=NULL;
    node*evenend=NULL;
    node*oddstart=NULL;
    node*oddend=NULL;

    int x;

    for(node*cur=head;cur!=NULL;cur=cur->next)
    {
        x=cur->data;
        if(x%2==0 && x!=1)
        {
            if(evenstart==NULL)
            {
                evenstart=cur;
                evenend=evenstart;
            }
            else{
                evenend->next=cur;
                evenend=evenend->next;
            }
        }
        else{
            if(oddstart==NULL)
            {
                oddstart=cur;
                oddend=oddstart;
            }
            else{
                oddend->next=cur;
                oddend=oddend->next;
            }
        }
    }
    if(oddstart==NULL || evenstart==NULL)
    {
        return head;
    }
    evenend->next=oddstart;
    oddend->next=NULL;

    return evenstart;
    
}
void display(node*head)
{
    node*m=head;

    while(m!=NULL)
    {
        cout<<m->data<<" ";
        m=m->next;
    }
    cout<<endl;
}

int main()
{
    node *head = new node(1);
    node *first = new node(2);
    node *second = new node(3);
    node *third = new node(4);
    node *fourth = new node(5);

    //op= 2->4->1->3->5

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    node*new_head=segregate(head);
    display(new_head);
}
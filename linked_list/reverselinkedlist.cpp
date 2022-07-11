#include <bits/stdc++.h>
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
    /* data */
};

//head->10->20->30->NULL
node*reverse(node*head)
{
    node*prev=NULL;
    node*next=NULL;
    node*cur=head;

    while(cur!=NULL)
    {
        next=cur->next;
        cur->next=prev;

        prev=cur;
        cur=next;


    }
    head=prev;

    return head;

}
void display(node *head)
{
    node *p=head;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);

    head->next = first;
    first->next = second;
    second->next = NULL;
    
    node*k=reverse(head);
    display(k);
}
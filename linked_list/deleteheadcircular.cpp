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

node*deletehead(node*head)
{
    node*p=head;
    node*k=head->next;
    if(p->next==NULL)
    {
        return p;
    }
    do
    {
        p=p->next;

        /* code */
    } while (p->next!=head);

    p->next=k;

    return k;
    
}
void display(node*head)
{
    node*k=head;
    do
    {
        cout<<k->data<<" ";
        k=k->next;
        /* code */
    } while (k!=head);

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
    third->next=head;

    cout<<"Before Deletion of Head"<<endl;
    display(head);


    node*new_head=deletehead(head);

    cout<<"After Deletion of the head"<<endl;
    display(new_head);

}
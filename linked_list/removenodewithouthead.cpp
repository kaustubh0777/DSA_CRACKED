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
//10->20->30->40->NULL
//10->30->30->40->NULL
//10->30->40->NULL
void deletenode(node*head)
{
    node*temp=head->next;
    node*cur=head;

    cur->data=temp->data;
    cur->next=temp->next;
}

void display(node*head)
{
    node*l=head;
    while(l!=NULL)
    {
        cout<<l->data<<" ";
        l=l->next;
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
    first->next=second;
    second->next=third;
    third->next=NULL;

    deletenode(second);

    display(head);


}
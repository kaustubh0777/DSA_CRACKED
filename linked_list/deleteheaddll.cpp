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
node*deletehead(node*head)
{
    node*cur=head;
    node*new_head=cur->next;
    do
    {
        cur=cur->next;

        /* code */
    } while (cur->next!=head);

    node*temp=cur->next;
    delete(temp);

    cur->next=new_head;

    return new_head;

    
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


    head->next=first;
    first->next=second;
    second->next=head;

    node*new_head=deletehead(head);

    display(new_head);


}
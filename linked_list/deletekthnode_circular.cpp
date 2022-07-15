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

//10->20->30->40

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

void deletekthnode(node*head,int k)
{
    node*p=head;
    int pos=1;

    do
    {
        if(pos==k-1)
        {
            p->next=p->next->next;
        }
        pos++;
        p=p->next;
        /* code */

    } while (p!=head);


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

    cout<<"Enter the kth node you want to delete"<<endl;
    int k;
    cin>>k;
    

    if(k==1)
    {
        node*new_head=deletehead(head);
        display(new_head);
    }

    else{
        deletekthnode(head,k);
         display(head);

    }
    

}
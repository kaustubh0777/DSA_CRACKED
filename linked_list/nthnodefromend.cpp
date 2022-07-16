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
void findnthnodefromend(node*head,int x)
{
    int c=0;
    int l=0;
    node*p=head;
    node*k=head;

    while(p!=NULL)
    {
        c++;
        p=p->next;

    }
    int pos=(c-x)+1;

    while(k!=NULL)
    {
        l++;
        if(l==pos)
        {
            cout<<k->data<<endl;
            break;
        }
        k=k->next;

    }


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

    int x;
    cout<<"Enter the nth node you want to print from the last"<<endl;
    cin>>x;

    findnthnodefromend(head,x);



}
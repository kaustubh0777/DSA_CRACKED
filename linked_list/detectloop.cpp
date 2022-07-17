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

bool detectloop(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return false;
    }
    node*slow=head;
    node*fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)   
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
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

    if(detectloop(head)==true)
    {
        cout<<"Loop exist"<<endl;
    }
    else{
        cout<<"Loop is not present"<<endl;
    }

}
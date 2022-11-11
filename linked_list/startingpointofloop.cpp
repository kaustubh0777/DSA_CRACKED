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
node*detectcycle(node*head)
{
    node*fast=head;
    node*slow=head;
    node*entry=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast)
        {
            while(slow!=entry)
            {
            entry=entry->next;
            slow=slow->next;
            }
            return entry;

        }
    }
    return NULL;
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


}
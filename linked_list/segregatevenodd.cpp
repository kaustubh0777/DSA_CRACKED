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
//10->19>20->21->NULL

void segregate(node*head)
{
    node*cur=head;
    int temp;
    int temp1;
    while(cur!=NULL)
    {
        if(cur->next->data%2!=0 && (cur->next->next->data)%2==0)
        {
            temp=cur->next->data;
            temp1=cur->next->data;

            cur->next->data=temp1;
            cur->next->next->data=temp;
        }
        cur-cur->next;
    }
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
    node *head = new node(10);
    node *first = new node(19);
    node *second = new node(20);
    node *third = new node(22);
    node *fourth = new node(21);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    segregate(head);
    display(head);
}
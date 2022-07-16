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

void display(node *head)
{
    node *p = head;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
node*reverse(node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node*newhead=reverse(head->next);
    node*headnext=head->next;
    headnext->next=head;

    head->next=NULL;

    return newhead;
}
int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(30);

    head->next = first;
    first->next = second;
    second->next = NULL;

    node *k = reverse(head);
    display(k);
}
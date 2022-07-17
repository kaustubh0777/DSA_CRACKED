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

//10->20->20->20

void removenode(node*head)
{
   node*cur=head;
   node*temp;

  while(cur!=NULL && cur->next!=NULL)
  {
    if(cur->data==cur->next->data)
    {
        temp=cur->next;
        cur->next=cur->next->next;
        delete(temp);
    }
    else{
        cur=cur->next;
    }
  }
    

}
void display(node *head)
{
    if (head == NULL)
    {
        return;
    }

    cout << head->data << " ";
    display(head->next);
}

int main()
{
    node *head = new node(10);
    node *first = new node(20);
    node *second = new node(20);
    node *third = new node(30);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next=NULL;

    removenode(head);
    display(head);
    cout << endl;
}
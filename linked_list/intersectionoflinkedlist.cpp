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
int getcount(node*head)
{
    int c=0;
    node*p=head;

    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    return c;
}
int _getintersection(int d,node*head1,node*head2)
{
    node*cur1=head1;
    node*cur2=head2;

    for(int i=0;i<d;i++)
    {
        if(cur1==NULL)
        {
            return -1;
        }
        cur1=cur1->next;
    }
    while(cur1!=NULL && cur2!=NULL)
    {
        if(cur1->data==cur2->data)
        {
            return cur1->data;
        }
     cur1=cur1->next;
     cur2=cur2->next;
    }

    return -1;



}
int getintersection(node*head1,node*head2)
{
    int c1=getcount(head1);
    int c2=getcount(head2);
    int d;

    if(c1>c2)
    {
        d=c1-c2;
        return _getintersection(d,head1,head2);
    }
    else
    {
        d=c2-c1;
        return _getintersection(d,head2,head1);
    }

}

int main()
{
    node *head1 = new node(3);
    node *first = new node(6);
    node *second = new node(9);
    node *third= new node(15);
    node *fourth = new node(30);

    node*head2=new node(10);
    
    head1->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    head2->next=third;


    cout<<getintersection(head1,head2)<<endl;
    




}
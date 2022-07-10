//Find the position of an element in linked list

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

int findpos(node*head,int x)
{
    node*p=head;
    int pos=-1;
    int k=0;

    while(p!=NULL)
    {
        if(p->data==x)
        {
            pos=k;
        }
        p=p->next;
        k++;

    }
    return pos;
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

    cout<<"Enter the element to find the position"<<endl;
    int x;
    cin>>x;

   int ans= findpos(head,x);

   cout<<ans+1<<endl;

}
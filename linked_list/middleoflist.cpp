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
void findmid(node*head)
{
        node*p=head;
        node*k=head;
        int c=0;
        int l=0;
        int mid;

        while(p!=NULL)
        {
            c++;
            p=p->next;

        }
    
        if((c-1)%2==0)
        {
            mid=c/2;
        }
        else{
            mid=(c+1)/2;
        }

        while(k!=NULL)
        {
            if(l==mid)
            {
                cout<<k->data<<endl;
                break;
            }
            l++;
            
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

    findmid(head);



}
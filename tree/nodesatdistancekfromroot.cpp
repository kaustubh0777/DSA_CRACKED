#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;

    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void kfromroot(node*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";

    }
    else{
        kfromroot(root->left,k-1);
        kfromroot(root->right,k-1);

    }


}

int main()
{

   struct node*root=new node(10);
   root->left=new node(8);
   root->right=new node(30);
   root->right->left=new node(40);
   root->right->right=new node(50);

   cout<<"Enter the  kth root"<<endl;
   int k;
   cin>>k;

   kfromroot(root,k);
   cout<<endl;



}
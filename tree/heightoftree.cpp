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

int heightoftree(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=heightoftree(root->left);
    int r=heightoftree(root->right);

    return max(l,r)+1;
}

int main()
{

   struct node*root=new node(10);
   root->left=new node(8);
   root->right=new node(30);
   root->right->left=new node(40);
   root->right->right=new node(50);

   cout<<heightoftree(root)<<endl;



}
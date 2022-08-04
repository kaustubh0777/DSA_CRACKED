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

int diameteroftree(node*root,int maxi)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=diameteroftree(root->left,maxi);
    int rh=diameteroftree(root->right,maxi);

    maxi=max(maxi,lh+rh);

    return 1+max(lh,rh);
}

int main()
{
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    root->left->right->left=new node(6);

    root->right->left=new node(7);
    root->right->right=new node(8);

    root->right->right->left=new node(9);
    root->right->right->right=new node(10);
    
    int maxi=INT_MIN;
    cout<<diameteroftree(root,maxi)<<endl;
}
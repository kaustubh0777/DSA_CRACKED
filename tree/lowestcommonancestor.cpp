#include<bits/stdc++.h>
using namespace std;

//Declare tree nodes
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
//function for lowest common ancestor
node* lca(node*r1,node*r2,node*root)
{
    //if we found NULL OR if found the node we are search for just return it
    if(root==NULL ||root==r1||root==r2)
    {
        return root;
    }
    node*left=lca(r1,r2,root->left);
    node*right=lca(r1,r2,root->right);

    if(left==NULL)
    {
        return right;
    }
    else if(right==NULL)
    {
        return left;
    }
    else{
        return root;
    }
}
int main()
{
    struct node*root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(6);
    root->left->right->right=new node(7);
    root->right=new node(3);
    root->right->left=new node(8);
    root->right->right=new node(9);

    node*ans=lca(root->left->left, root->left->right->right,root);

    cout<<ans->data<<endl;



    
}
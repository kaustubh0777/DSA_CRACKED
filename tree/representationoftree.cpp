#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

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

//inorder- LEFT,ROOT,RIGHT

void inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//preorder- root,left,right
void preorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//postorder- Left Right Root
void postorder(node*root)
{
   if(root==NULL)
   {
    return;
   }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";


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

    cout<<"Preorder Traversal"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Inorder Traversal"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Postorder Traversal"<<endl;
    postorder(root);
    cout<<endl;

}
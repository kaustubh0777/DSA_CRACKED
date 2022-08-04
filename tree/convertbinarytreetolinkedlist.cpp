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
//inorder traversal
node*converttodoublell(node*root)
{
    // node*head;
    static node*prev=NULL;
    
    if(root==NULL)
    {
        return root;
    }
    node*head=converttodoublell(root->left);
    if(prev==NULL)
    {
        head=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
        
    }
    prev=root;
    converttodoublell(root->right);
    return head;
}
void display(node*new_head)
{
    node*cur=new_head;
    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->right;
    }
}

int main()
{
    struct node*root=new node(20);
    root->left=new node(8);
    root->right=new node(12);

    root->left->left=new node(3);
    root->left->right=new node(5);
    
    node*new_head=converttodoublell(root);
    display(new_head);



}
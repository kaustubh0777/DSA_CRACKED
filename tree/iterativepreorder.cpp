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

void preorder(node*root)//Root,Left,Root
{
    stack<node*>s;
    s.push(root);

    while(!s.empty())
    {
        node*k=s.top();
        s.pop();
        cout<<k->data<<" ";
        if(k->right)
        {
            s.push(k->right);
        }
        if(k->left)
        {
            s.push(k->left);
        }
        
        //s.pop();
    }




}
int main()
{
    //Iterative preorder traversal

    //stack<int>s;

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

    preorder(root);
    cout<<endl;
}
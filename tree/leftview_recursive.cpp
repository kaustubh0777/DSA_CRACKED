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
void leftview(node*root,int&maxlevel,int level)
{
    //int level=0;
    if(root==NULL)
    {
        return;
    }
    //the idea is to print only the left node first if we are in the new level
    if(level>maxlevel)
    {
        cout<<root->data<<" ";
        maxlevel=level;
    }

    leftview(root->left,maxlevel,level+1);
    leftview(root->right,maxlevel,level+1);
}

int main()
{
    struct node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);
    
    int maxlevel=0;
    int level=1;

    leftview(root,maxlevel,level);
    cout<<endl;



}
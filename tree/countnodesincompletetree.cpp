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
int lheight(node*root)
{
   int c=0;
   while(root)
   {
    c++;
    root=root->left;
   }
   return c;
}
int rheight(node*root)
{
    int c=0;
   while(root)
   {
    c++;
    root=root->right;
   }
   return c;
}
int countnodes(node*root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=lheight(root);
    int rh=rheight(root);
    if(lh==rh)
    {
        return (1<<lh)-1;
    }

    return 1+countnodes(root->left)+countnodes(root->right);




}

int main()
{
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->left=new node(10);
    root->left->right->right=new node(11);
    root->left->left->left=new node(8);
    root->left->left->right=new node(9);

    root->right->left=new node(6);
    root->right->right=new node(7);


    
    cout<<countnodes(root)<<endl;

}
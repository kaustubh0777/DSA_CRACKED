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

void maximumintree(node*root,int &max)
{
    if(root==NULL)
    {
        return;
    }
    maximumintree(root->left,max);
    if(root->data>max)
    {
        max=root->data;
    }
    maximumintree(root->right,max);

}
//Another method
int getmax(node*root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,max(getmax(root->left),getmax(root->right)));


}

int main()
{

   struct node*root=new node(10);
   root->left=new node(8);
   root->right=new node(30);
   root->right->left=new node(40);
   root->right->right=new node(50);

   int max=INT_MIN;
   maximumintree(root,max);

   cout<<"Maximum value in the binary tree is "<<getmax(root)<<endl;




}
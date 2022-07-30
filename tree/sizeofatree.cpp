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
int sizeoftree(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return (sizeoftree(root->left)+sizeoftree(root->right))+1;

}
int main()
{
   struct node*root=new node(1);
   root->left=new node(2);
   root->left->left=new node(3);


    cout<<"The Size of the tree is "<<sizeoftree(root)<<endl;

}
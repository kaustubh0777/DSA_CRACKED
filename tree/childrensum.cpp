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
bool checkchildren(node*root)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return true;
    }
    int sum=0;
    if(root->left!=NULL)
    {
        sum+=root->left->data;
    }
    if(root->right!=NULL)
    {
        sum+=root->right->data;
    }

    return (sum==root->data && checkchildren(root->left)&& checkchildren(root->right));


}
int main()
{
    struct node*root=new node(20);
    root->left=new node(8);
    root->right=new node(12);

    root->left->left=new node(3);
    root->left->right=new node(5);
    

    if(checkchildren(root))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }  


}
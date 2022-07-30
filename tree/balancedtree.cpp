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
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=height(root->left);
    int r=height(root->right);

    return max(l,r)+1;
}

bool balancedtree(node*root)
{
    int left=height(root->left);
    int right=height(root->right);

    if(abs(left-right)<=1)
    {
       return true;
    }
   return false;
}

int main()
{

    struct node*root=new node(18);
    root->left=new node(4);
    root->right=new node(12);

    root->right->left=new node(3);
    root->right->right=new node(5);
    root->right->right=new node(5);

    if(balancedtree(root))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
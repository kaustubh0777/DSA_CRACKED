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
void leftview(node*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);

    while(!q.empty())
    {
        node*k=q.front();
        q.pop();
        int size=q.size();

        for(int i=0;i<size;i++)
        {
            if(i==0)
            {
                cout<<k->data<<" ";

            }
            if(k->left!=NULL)
            {
                q.push(k->left);
            }
            if(k->right!=NULL)
            {
                q.push(k->right);
            }

        }
    }

}
int main()
{

    struct node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->left=new node(40);
    root->right->right=new node(50);

    leftview(root);
}
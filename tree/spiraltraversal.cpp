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
void spiraltraversal(node*root,vector<vector<int>>&ans)
{
    vector<int>v;
    if(root==NULL)
    {
        return;
    }

    queue<node*>q;
    q.push(root);

    int flag=0;//lefttoright

    while(!q.empty())
    {
        int size=q.size();

        for(int i=0;i<size;i++)
        {
            node*k=q.front();
            q.pop();

            if(k->left)
            {
                q.push(k->left);
            }
            if(k->right)
            {
                q.push(k->right);
            }

            v.push_back(k->data);
        }
        if(flag==0)
        {
            ans.push_back(v);
            v.clear();
        }
        else
        {

          reverse(v.begin(),v.end());
          ans.push_back(v);
          v.clear();

        }
        if(flag==0)
        {
            flag=1;
        }
        else{
            flag=0;
        }

    }


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
    vector<vector<int>>ans;

    spiraltraversal(root,ans);

    for(auto it:ans)
    {
        for(auto itr:it)
        {
            cout<<itr<<" ";
        }
    }
    cout<<endl;

}
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
int maximumwidth(node*root,vector<vector<int>>&ans)
{
    vector<int>v;
    //vector<vector<int>>ans;
    queue<node*>q;
    int maxi=INT_MIN;

    if(root==NULL)
    {
        return 0;
    }
    q.push(root);
    int res=0;

    while(!q.empty())
    {
        int size=q.size();
        res=max(res,size);
        

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
           
        }
    }
    return res;

}

int main()
{
    struct node*root=new node(10);
    root->left=new node(20);
    root->right=new node(30);

    root->left->left=new node(40);
    root->left->right=new node(100);
    // root->left->left->left=new node(80);

    root->right->left=new node(50);
    root->right->right=new node(60);

    vector<vector<int>>ans;
    
    cout<<maximumwidth(root,ans)<<endl;




}
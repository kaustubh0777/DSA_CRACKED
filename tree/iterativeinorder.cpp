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
void inorder(node*root)
{
    stack<node*>s;
    node*k=root;

    while(true)
    {
      if(k!=NULL)
      {
        s.push(k);
        k=k->left;
      }
      else{
        if(s.empty()==true)
        break;
            
            k=s.top();
            s.pop();
            cout<<k->data<<" ";
            k=k->right;
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

    inorder(root);



}
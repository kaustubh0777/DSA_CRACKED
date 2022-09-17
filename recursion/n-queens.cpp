#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool issafe(int row,int col,vector<string>board,int n)
    {
        int duprow=row;
        int dupcol=col;
        
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;
            }
            row--;
            col--;

        }
        col=dupcol;
        row=duprow;
        
        while(col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;

            }
            col--;
        }
        row=duprow;
        col=dupcol;
        
        while(row<n && col>=0)
        {
            if(board[row][col]=='Q')
            {
                return false;

            }
            row++;
            col--;

        }
        
        return true;
    }
    
    void solve(int col,vector<vector<string>>&ans,vector<string>board,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(issafe(row,col,board,n))
               {
                   board[row][col]='Q';
                   solve(col+1,ans,board,n);
                   board[row][col]='.';
               }

        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        string s(n,'.');
        vector<string>board(n);
        
        vector<vector<string>>ans;
        
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        
        solve(0,ans,board,n);
        
        return ans;
        
        
        
    }
};

int main()
{
    
  int n ;
  cin>>n;
  Solution obj;
  vector < vector < string >> ans = obj.solveNQueens(n);
  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
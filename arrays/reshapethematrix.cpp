#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) 
    {
        
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)
        {
            return mat;
        }
        
        vector<vector<int>>mt(r,vector<int>(c));
        
        int total=m*n;
        
        for(int i=0;i<total;i++)
        {
            mt[i/c][i%c]=mat[i/n][i%n];
            
            
        }
        return mt;
    }
int main()
{

    vector<vector<int>>mat={{1,2},{3,4}};
    vector<vector<int>>ans=matrixReshape(mat,1,4);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();i++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }



}

        

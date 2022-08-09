#include<bits/stdc++.h>
using namespace std;

int main()
{
    int prev=1,prev2=0;
    int n;
    cin>>n;

    int cur;
    //Tabulation approach
    //0 1 1 2 3 5 8 13 

    //prev 1 prev2 0 after that prev=1 & prev2=1 ,so it becomes an pattern
    for(int i=2;i<=n;i++)
    {
        cur=prev+prev2;
        prev2=prev;
        prev=cur;

    }
    cout<<prev<<endl;
}
#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int sumofDigits(int n,int &sum)
{
    if(n==0)
    {
        return sum; 
    }

    sum=sum+n%10;

   return sumofDigits(n/10,sum);
}
int main()
{
int n;
cin>>n;

int sum=0;

cout<<sumofDigits(n,sum)<<endl;

}
#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;

int count=256;
int f=0;

int arr[count]={0};

for(int i=0;i<s1.length();i++)
{
    arr[s1[i]]++;
    arr[s2[i]]--;
}
for(int i=0;i<count;i++)
{
    if(arr[i]!=0)
    {
        cout<<"NO"<<endl;
        f=1;
        break;
    }
}
if(f==0)
{
    cout<<"Yes"<<endl;
}


}
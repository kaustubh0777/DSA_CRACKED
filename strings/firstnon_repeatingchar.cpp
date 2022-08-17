#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
    string s1;
    cin>>s1;

    int count=256;
    int f=0;

    int arr[count]={0};

    for(int i=0;i<s1.length();i++)
    {
        arr[s1[i]]++;
    }

    for(int i=0;i<s1.length();i++)
    {
        if(arr[s1[i]]==1)
        {
            f=1;
            cout<<s1[i]<<endl;
            break;

        }

    }
    if(f==0)
    {
        cout<<"NOthing found"<<endl;
    }

}
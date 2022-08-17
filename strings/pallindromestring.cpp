//WAP TO CHECK IF A GIVEN STRING IS PALLINDROME OR NOT

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    string str=s;

    int low=0;
    int high=s.length()-1;

    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;

    }
    if(str==s)
    {
        cout<<"The string is pallindrome"<<endl;
    }
    else{
        cout<<"NOt"<<endl;
    }
}
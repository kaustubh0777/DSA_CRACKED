#include<bits/stdc++.h>
using namespace std;

void generate(string x,string s,int i)
{
   if(i==s.length())
   {
    cout<<x<<endl;
    return;
   }

   generate(x+s[i],s,i+1);//include the letter 
   generate(x,s,i+1);//not include the letter


   
    
}   

int main()
{
    string s;
    cin>>s;

    string x="";
    int i=0;

    generate(x,s,i);
   
}
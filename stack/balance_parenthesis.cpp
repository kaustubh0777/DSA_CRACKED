#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{

    stack<char>st;
    string s;
    cin>>s;

    int flag=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('|| s[i]=='[' || s[i]=='{')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()=='(')
            {
                st.pop();
            }
            else{
                
                cout<<"String not Balanced"<<endl;
                flag=1;
                break;
            }

        }
        else if(s[i]==']')
        {
            if(st.top()=='[')
            {
                st.pop();
            }
            else{
                cout<<"String not Balanced"<<endl;
                flag=1;
                break;
            }

        }
        else if(s[i]=='}')
        {
            if(st.top()=='{')
            {
                st.pop();
            }
            else{
                cout<<"String not Balanced"<<endl;
                flag=1;
                break;
            }

        }
    }
    if(!st.empty() && flag==1)
    {
        cout<<"String not balanced"<<endl;
    }
    else{
        cout<<"String is balanced"<<endl;
    }

}
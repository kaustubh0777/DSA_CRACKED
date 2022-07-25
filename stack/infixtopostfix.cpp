#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

//function to check precedence

int precedence(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    if(ch=='/' || ch=='*')
    {
        return 2;
    }
    if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else{

    return -1;
    }
}


void postfix(string s)
{
    string res="";
    stack<char>st;
    char ch;
    for(int i=0;i<s.length();i++)
    {
        ch=s[i];
        //if the char is operand ,print it on the screen
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
        {
            res+=ch;
        }
        //if we encounter the opening bracket just push it back into the stack
        else if(ch=='(')
        {
            st.push('(');
        }
        else if(ch==')')
        {
            while(st.top()!='(')
            {
                res=res+st.top();
                st.pop();

            }
            st.pop();
        }
        else{
            //Now if it is an operator
            while(!st.empty() && precedence(s[i])<=precedence(st.top()))
            {
                if(ch=='^' && st.top()=='^')
                {
                    break;
                }
                else{

                res+=st.top();
                st.pop();
                }
            }

            st.push(ch);
            }

            
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}
int main()
{
string s;
cin>>s;

postfix(s);
}
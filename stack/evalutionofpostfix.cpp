#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

int main()
{
stack<int>st;
string s;
cin>>s;

int a,b;

for(int i=0;i<s.length();i++)
{
    if(s[i]>='0' && s[i]<='9')
    {
        st.push(s[i]-'0');
    }
    else
    {
        a=st.top();
        st.pop();
        b=st.top();
        st.pop();

        switch(s[i])
        {
            case '+':
            st.push(b+a);
            break;

            case '-':
            st.push(b-a);
            break;

            case '/':
            st.push(b/a);
            break;

            case '*':
            st.push(b*a);
            break;

            case '^':
            st.push(b^a);
            break;
        }
    }

    
}

cout<<st.top()<<endl;
}
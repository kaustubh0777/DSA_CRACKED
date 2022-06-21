#include<bits/stdc++.h>
using namespace std;

//Just dry run it you will get the pattern of movement of discs

void toh(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<<A <<" to "<< C<<endl;
        return;
    }
    toh(n-1,A,C,B);//moving from A to B using C as an Auxillary space
    {
       cout<<"Move "<<n<<"from "<<A<<" to "<<C<<endl;
    }
    toh(n-1,B,A,C);//moving from B to C using A as an Auxillary space


}

int main()
{
    int n; //enter number of discs
    cin>>n;

     char A='A';
     char B='B';
     char C='C';



    toh(n,A,B,C);




}
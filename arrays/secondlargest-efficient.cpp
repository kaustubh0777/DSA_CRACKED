#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,in;
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)    
    {
        cin>>in;
        v.push_back(in);
    }
     
     //5 10 12 20

     //So the idea here is- each time we encounter a largest element we gonna update the current largest
     //and we will make the second largest equal to the previous largest
     //Therefore Largest_NO=Current Largest & Second_Largest=previous largest

     //12 35 1 10 34 1
     //lar1 la2
     //0    1
     //
        int first=-1;
	    int second=-1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]>first)
	        {
	            second=first;
	            first=v[i];
	        }
	        if(v[i]<first && v[i]>second)
	        {
	            second=v[i];
	        }
	        
	    }
    cout<<"Second Largest = "<<second<<endl;
}
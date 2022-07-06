// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long c=0;
    
    void merge(long long arr[],long long left,long long mid,long long right)
    {
        long long  l=mid-left+1;
        long long r=right-mid;
        
        long long a[l];
        long long b[r];
        
        for(int i=0;i<l;i++)
        {
            a[i]=arr[i+left];
            
        }
         for(int i=0;i<r;i++)
        {
            b[i]=arr[i+mid+1];
            
        }
        long long i=0,j=0,k=left;
        
        while(i<l && j<r)
        {
            if(a[i]<=b[j])
            {
                arr[k]=a[i];
                k++;
                i++;
                
                
            }
            else if(a[i]>=b[j])
            {
                
                arr[k]=b[j];
                j++;
                k++;
                c+=l-i;
            }
        }
        while(i<l)
        {
           arr[k]=a[i];
           k++;
           i++;
        }
        while(j<r)
        {
              arr[k]=b[j];
           j++;
           k++;
        }
        
        
        
    }
    
    void mergesort(long long arr[],long long left,long long right)
    {
        if(left<right)
        {
            long long mid=left+(right-left)/2;
            mergesort(arr,left,mid);
            mergesort(arr,mid+1,right);
            merge(arr,left,mid,right);
        }
    }
    long long int inversionCount(long long arr[], long long n)
    {
        mergesort(arr,0,n-1);
        return c;
        // Your Code Here
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
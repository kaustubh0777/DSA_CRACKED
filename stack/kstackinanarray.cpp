#include<bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

struct kstacks
{
    /*
    using dynamic array and top array for storing top of K stacks
    the next array stores the next slot of the kth stack,which eventually helps us to know the free slot
    mark the end of the next slot as -1 which helps to fix the size of the stack and avoid overflow
    */
    int *arr;
    int *top;
    int *next;
    int cap,k,freetop=0;//because initially the whole array is empty

    kstacks(int x,int k1)
    {
        cap=x;
        k=k1;

        arr=new int[cap];
        next=new int[cap];
        top=new int[k];

        for(int i=0;i<k;i++)
        {
            top[i]=-1;
        }
        freetop=0;
        for(int i=0;i<cap-1;i++)
        {
            next[i]=i+1;
        }
        next[cap-1]=-1;


    }
    void push(int x,int k)
    {
        if(freetop==-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        int i=freetop;
        freetop=next[i];
        next[i]=top[k];
        arr[i]=x;
        top[k]=i;
    }
    void pop(int k)
    {
        if(top[k]==-1)
        {
            cout<<"Underflow";
            return;
        }
        int i=top[k];
        top[k]=next[i];
        next[i]=freetop;
        freetop=i;

        

    }
};


int main()
{

}
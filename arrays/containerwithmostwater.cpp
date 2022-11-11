// https://leetcode.com/problems/container-with-most-water/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left=0;
        int right=height.size()-1;
        int w,h,area;
        int maxi=0;

        while(left<right)
        {
            w=(right-left);
            h=min(height[left],height[right]);
            area=w*h;
            maxi=max(maxi,area);

            if(height[left]<height[right])
            {
                left++;
            }
            else if(height[left]>height[right])
            {
                right--;

            }
            else{
                left++;
                right--;
            }

        }
        return maxi;
        
    }
};
int main()
{
    vector<int>height;
    int n;
    cin>>n;

    int in;

    for(int i=0;i<n;i++)
    {
        cin>>in;
        height.push_back(in);
    }
     Solution s;
    int ans=s.maxArea(height);

    cout<<ans<<endl;

}
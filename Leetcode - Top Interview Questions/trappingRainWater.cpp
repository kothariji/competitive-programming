class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
      //  vector<int> ans;
        vector<int> left(n,0);
        vector<int> right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        //traverse left and right 
        if(n<=2)
        {
            return 0;
        }
        for(int i=1;i<n;i++)
        {
            left[i]=max(left[i-1],height[i]);           
        }
        for(int i=1;i<n;i++)
        {
            right[n-i-1]=max(right[n-i],height[n-i-1]); 
        }
        int rain=0;
        for(int i=0;i<n;i++)
        {
            rain += min(left[i],right[i])-height[i];
         //   ans.push_back(rain);
        }
       // return ans.size()-1;
        return rain;
    }
};
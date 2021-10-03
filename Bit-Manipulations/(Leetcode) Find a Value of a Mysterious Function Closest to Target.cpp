class Solution {
public:
    int closestToTarget(vector<int>& arr, int target) {
        int m = INT_MAX;
        int mn = INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            int value = arr[i];
            if(abs(value - target) < m)
            {
                m = abs(value-target);
                 
            }
            for(int j=i+1;j<arr.size();j++)
            {
                value = value & arr[j];
                if(abs(value - target) < m)
                    m = abs(value - target);
                if(m==0) return 0;
                if(value <=target) break;
            }
            if(value > target)
                break;
            
        }
        return m;
    }
};
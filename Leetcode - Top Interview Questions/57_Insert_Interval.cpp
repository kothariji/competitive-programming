//link to Question->https://leetcode.com/problems/insert-interval/
//solution
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        for(auto i : intervals){
            if(v.empty()==1 || v.back()[1]<i[0]){
                v.push_back(i);
            }
            else{
                v.back()[1]=max(v.back()[1], i[1]);
            }
        }
        return v;
    }
};
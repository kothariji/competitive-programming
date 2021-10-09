//link to Question->https://leetcode.com/problems/interval-list-intersections/
//solution
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> v;
        int i=0;
        int j=0;
        while(i<firstList.size() && j<secondList.size()){
            int x=max(firstList[i][0],secondList[j][0]);
            int y=min(firstList[i][1],secondList[j][1]);
            if(x<=y){
                v.push_back({x,y});
            }
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
            j++;
            }
        }
        return v;
    }
};
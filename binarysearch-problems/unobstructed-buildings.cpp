// Link to problem - https://binarysearch.com/problems/Unobstructed-Buildings
// status - accepted ✅


vector<int> solve(vector<int>& heights) {
    int arrSize = heights.size();
    vector<int> res;

    if (arrSize == 0) return res;
    if (arrSize == 1) {
        res.push_back(0);
        return res;
    }
    if (arrSize == 2) {
        if (heights[0] > heights[1]) {
            res.push_back(0);
            res.push_back(1);
        } else {
            res.push_back(1);
        }
        return res;
    }

    int max = heights[arrSize-1];
    res.push_back(arrSize-1);
    
    for (int i=heights.size()-2; i>=0; i--) {
        if (heights[i] > max) {
            max = heights[i];
            res.push_back(i);
        }
    }

    sort(res.begin(), res.end());
    return res;
}
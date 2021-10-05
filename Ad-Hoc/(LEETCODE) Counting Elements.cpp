class Solution {
public:
  int countElements(vector<int>& arr) {
    int count = 0;
    std::map<int, int> dict;
    
    for (int x : arr) {
      dict[x]++;
    }
    
    for (int x : arr) {
      if (dict[x+1] > 0) count++;
    }

    return count;
  }
};

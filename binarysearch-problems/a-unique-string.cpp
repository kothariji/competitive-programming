// Link to problem - https://binarysearch.com/problems/A-Unique-String
// status - accepted ✅

bool solve(string s) {
    unordered_map<char, int> obj;

    for (int x=0; x<s.length();x++) {
        if (obj.find(s[x]) == obj.end()) {
            obj[s[x]] = 1;
        } else {
            obj[s[x]]++;
        }
    }

    for (auto ptr: obj) {
        if (ptr.second > 1) return false;
    }

    return true;
}
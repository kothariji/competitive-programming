int Solution::longestConsecutive(const vector<int> &A) {
    set<int> s;
    for(int i:A)
        s.insert(i);
    int res=1,temp=1;
    for(auto i=s.begin();i!=s.end();i++){
        if(*(++i)-*(--i)==1) temp++;
        else temp=1;
        res=max(res,temp);
    }
    return res;
}

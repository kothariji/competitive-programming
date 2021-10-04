vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> arr;
    for(int i=0,j=0;i<A.size() && j<B.size();){
        if(A[i]>B[j]) j++;
        else if(A[i]<B[j]) i++;
        else {arr.push_back(A[i]);i++;j++;}
    }
    return arr;
}

vector<int> Solution::nextGreater(vector<int> &A) {
    vector<int> arr(A.size(),-1);
    stack<int> s;
    for(int i=0;i<A.size()-1;i++){
        if(A[i]<A[i+1]) {
        arr[i]=A[i+1];
        while(!s.empty() && A[s.top()]<A[i+1]){
        arr[s.top()]=A[i+1];
        s.pop();
        }}
        else{
            s.push(i);
        }
    }
    return arr;
}

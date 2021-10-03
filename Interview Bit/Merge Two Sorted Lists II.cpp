void Solution::merge(vector<int> &A, vector<int> &B) {
A.resize(A.size()+B.size());
for(int i=A.size()-1,j=B.size()-1;j>=0;)
    A[i--]=B[j--];
sort(A.begin(),A.end());
}

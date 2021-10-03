int split(vector<int> &A){
    int n=A.size(),j=0;
    for(int i=0;i<n;i++){
            if(A[i]<=0){
                std::swap(A[i],A[j]);
                j++;
            }
    }
    return j;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int spoint=split(A);
    for(int Spoint=spoint;Spoint<A.size();Spoint++){
        if(abs(A[Spoint])-1<(A.size()-spoint) && A[abs(A[Spoint])-1+spoint]>=0)
            A[abs(A[Spoint])-1+spoint]*=-1;
    }
    for(int i=spoint;i<A.size();i++)
        if(A[i]>0)
            return i+1-spoint;
    return A.size()-spoint+1;
}

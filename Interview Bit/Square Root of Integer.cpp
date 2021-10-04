int Solution::sqrt(int A) {
    if(A<=1) return A;
    long long int low=0,high=A>>1;
    while(low<=high){
        long long int mid=(low+high)>>1;
        if((mid*mid <A && (mid+1)*(mid+1)>A) || (mid*mid==A)) return mid;
        else if(mid*mid > A) high=mid-1;
        else low=mid+1;
    }
}

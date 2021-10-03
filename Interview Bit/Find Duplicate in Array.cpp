int Solution::repeatedNumber(const vector<int> &A) {
    if(A.size()==1)
        return -1;
    int sp=A[0],fp=A[0];
    do{
    sp=A[sp];
    fp=A[A[fp]];
    }while(sp!=fp);

    fp=A[0];
    while(sp!=fp){
        sp=A[sp];
        fp=A[fp];
    }
    return sp;
}

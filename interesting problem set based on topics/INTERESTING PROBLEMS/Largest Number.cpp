int findDigits(int n){
    int count=0;
    while(n>0)
    {
        count++;
        n/=10;
    }
    return count;
}

bool mycomp(int a,int b){
    int x=findDigits(a);
    int y=findDigits(b);
    return (a*pow(10,y)+b)>(b*pow(10,x)+a);
}

string Solution::largestNumber(const vector<int> &B) {
    vector<int> A=B;
    sort(A.begin(),A.end(),mycomp);
    string s="";
    int n=A.size();
    for(int i=0;i<n;i++)
        s+=to_string(A[i]);
    for(char i:s)
        if(i!='0')
            return s;
    return "0";
}

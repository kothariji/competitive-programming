//https://leetcode.com/problems/fraction-to-recurring-decimal/submissions/
class Solution {
public:
    string fractionToDecimal(long long int a,long long int b) {
         string s;
    int sign=(a < 0) ^ (b < 0)?-1:1;
    if(a==0)
    return "0";
    if(sign==-1 )
    {
        s+="-";
    }
    long long int A=a,B=b;
    if(a<0)
    A*=-1;
    if(b<0)
    B*=-1;
    long long int x=((long)A)/((long)B);
    s+=to_string(x);
    if(A%B==0)
    return s;
    s+='.';
    map<int,int>mp;
    int index;
    bool repeating=false;
    long long int rem=abs(A)%abs(B);
    while(rem>0 && !repeating){
        if(mp.find(rem)!=mp.end()){
            index=mp[rem];
            repeating=true;
            break;
        }
        else{
            mp[rem]=s.size();            
        }
        rem*=10;
        int y=rem/B;
        s+=to_string(y);
        rem=rem%B;
    }
    if(repeating){
        s.insert(index,"(");
        s+=')';
    }
    return s;
    }
};

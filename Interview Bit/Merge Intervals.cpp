bool mycomp(Interval i1,Interval i2){
    return i1.start<i2.start;
}

vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> sol;
    for(Interval i:intervals){
        long t1,t2,found=0;
        if(newInterval.start>=i.start && newInterval.start<=i.end)
            {newInterval.start=i.start;found=1;}
        if(newInterval.end<=i.end && newInterval.end>=i.start)
            {newInterval.end=i.end;found=1;}
        if(i.start>=newInterval.start && i.end<=newInterval.end)
            found=1;
        if(found==0)
            sol.push_back(i);
    }
    sol.push_back(newInterval);
    sort(sol.begin(),sol.end(),mycomp);
    return sol;
}

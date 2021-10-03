vector<vector<int> > Solution::generateMatrix(int n) {
    vector<vector<int>> sol;
    for(int i=0;i<n;i++)
        {
            vector<int> arr(n,0);
            sol.push_back(arr);
        }
    int val=1;
    for(int r1=0,r2=n-1,c1=0,c2=n-1;r1<=r2;)
    {
        for(int i=c1;i<=c2;i++)
            sol[r1][i]=val++;
        r1++;
        for(int i=r1;i<=r2;i++)
            sol[i][c2]=val++;
        c2--;
        for(int i=c2;i>=c1;i--)
            sol[r2][i]=val++;
        r2--;
        for(int i=r2;i>=r1;i--)
            sol[i][c1]=val++;
        c1++;
    }
    return sol;
}

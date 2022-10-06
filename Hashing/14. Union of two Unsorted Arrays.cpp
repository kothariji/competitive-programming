//Naive Approach
//Time Complexity: O((m+n) * (m+n))
//Aux Space: O(m+n)

int findUnion(int a[], int b[], int m , int n)
{
    int c[m+n];
    for(int i=0; i<m;i++)
        c[i]=a[i];

    for(int i=0; i<n;i++)
       c[m+i] = b[i];

    int res=0;
    for(int i=0; i<m+n; i++)
    {
        bool flag= false;
        for(int j=0; j<i;j++)
        {
            if(c[i]==c[j]) { flag= true; break; }
        }

        if(flag== false) res++;
    }       

    return res;

}

//Efficient solution 
//Time Complexity: O(m+n)
//Aux Space: O(m+n)
int findUnion(int a[], int b[], int m , int n)
{
    unordered_set<int> s;

    for(int i=0; i<m ;i++)
        s.insert(a[i]);

    for(int j=0;j<n;j++)
       s.insert(b[i]);

    return s.size();       
}

#include <bits/stdc++.h>
#define lli long long int
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <string> v1;
    string data;
    for(int i=0; i<n; i++)
    {
        cin>>data;
        v1.push_back(data);
    }   
    sort(v1.begin(), v1.end());
    map <string, pair<lli, lli> > mp1;
    for(int i=0; i<v1.size(); i++)
    {
        lli place = i+1;
        lli sumi = 0;
        for(int j=0; j<v1[i].length(); j++)
            sumi += (int)((v1[i][j]-'A')+1);
        mp1[v1[i]] = {place, sumi};
    }
    int q;
    cin>>q;
    while(q--)
    {
        cin>>data;
        cout<<(lli)((lli)(mp1[data].first)*(lli)(mp1[data].second))<<endl;
    }
    return 0;
}

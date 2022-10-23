//An Anagram is a word or phrase formed by rearranging the letters of a 
//different word or phrase, typically using all the original letters exactly once.

#include<bits/stdc++.h>
using namespace std;


bool anagramStrings (string stri, int m, string str2, int n)
{

    if (m != n)
        return false;

    else{
    sort(stri.begin(), stri.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < m; i = i + 1)
    {
      if (stri[i] = str2[i])
        return false;
    }

    return true;
    
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int n,m;
        cout<<"Enter size of first string : ";
        cin>>m;
        cout<<"Enter the first string : ";
        cin>>s1;
        cout<<"Enter size of 2nd string : ";
        cin>>n;
        cout<<"Enter the 2nd string : ";
        cin>>s2;
        bool ans = anagramStrings(s1,m,s2,n);
        if(ans == true) cout<<"It's a valid anagram"<<endl;
        else cout<<"It's not a valid anagram"<<endl;
    }

 return 0;
}

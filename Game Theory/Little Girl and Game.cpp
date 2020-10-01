#include<bits/stdc++.h>
 
 
#define ll long long
 
 
 

                          
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll H[26] = {0};
    for (ll i = 0; i < s.length(); i++)
    {
        H[s[i] - 'a']++;
    }
    ll even = 0, odd = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (H[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    ll cn = 0;
    if (odd <= 1)
    {
        cout << "First" << "\n";
        
    }
    else
    {
        if (even % 2 == 0)
        {
            for (ll i = 0; i < 26; i++)
            {
                if (H[i] % 2 == 0)
                {
                    H[i]--;
                }
            }
            for (ll i = 0; i < 26; i++)
            {
                if (H[i] % 2 != 0)
                {
                    cn++;
                }
            }
            if (cn % 2 != 0)
            {
                cout << "First" << "\n";
            }
            else
            {
                cout << "Second" << "\n";
            }
        }
        else
        {
            for (ll i = 0; i < 26; i++)
            {
                if (H[i] % 2 == 0)
                {
                    H[i]--;
                }
            }
            for (ll i = 0; i < 26; i++)
            {
                if (H[i] % 2 != 0)
                {
                    cn++;
                }
            }
            if (cn % 2 != 0)
            {
                cout << "Second" << "\n";
            }
            else
            {
                cout << "First" << "\n";
            }
        }
    }
 
 return 0;   
}
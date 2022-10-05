#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for(auto it= s.begin(); it!= s.end();it++)
        cout<<(*it)<<" ";

    cout<<endl;
    cout<<s.size()<<" ";
    s.clear();
    cout<<s.size()<<" ";

    if(s.find(15)==s.end())
      cout<<"Found";

    else
      cout<<"Found"<<*(s.find(15));  


    if(s.count(15))
      cout<<"Found";

    else
      cout<<"Not Found";


    s.erase(s.begin(), s.end());  

    return 0;    
}
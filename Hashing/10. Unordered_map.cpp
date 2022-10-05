**** Unordered_map: ****

Used to store key-value pairs
Uses Hashing Algorithms
It has no specific order of keys.


#include<iostream>
#include<unordered_map> m;

using namespace std;

int main()
{
    unordered_map<string ,int> m;
    m["gfg"]= 20;
    m["ide"]=30;
    m.insert(["courses", 15]);

    for(auto x: m)
      cout<<x.first<<" "<<x.second<<endl;

    return 0;  
}


// Program 2

#include<iostream>
#include<unordered_map> m;

using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["gfg"]= 20;
    m["ide"]= 30;
    m["courses"]= 15;
    if(m.find("ide")!=m.end())
       cout<<"Found\n";

    else
       cout<<"Not Found\n";

    for(auto it = m.begin(); it!=m.end(); it++)
       cout<<(it->first)<<" "<<(it->second)<<endl;



    if(m.count("ide") > 0)
       cout<<"Found";

    else
       cout<<"Not Found";      
}


#include<iostream>
#include<unordered_map>m;

using namespace std;
int main()
{
    unordered_map<string , int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m["courses"]=15;

    cout<<m.size()<<" ";
    m.erase("ide");
    m.erase(m.begin());
    cout<<m.size()<<" ";

    return 0;
}

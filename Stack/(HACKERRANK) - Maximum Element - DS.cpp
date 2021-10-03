#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <sstream>
#include <string>


using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, query_type, query_value;
    string query_line;
    stack<int> s, max_val;
    cin>>n;
    cin.ignore();
    
    for(int i=0; i<n; i++)
    {
        getline(cin, query_line);
        istringstream ss(query_line);
        ss>>query_type>>query_value;
        
        switch(query_type)
        {
            case 1:
            {
                s.push(query_value);
                if(max_val.empty() || max_val.top() <= query_value)
                {
                    max_val.push(query_value);
                    
                }
                break;
            }
            
            case 2:
            {
                if(s.top() == max_val.top())
                {
                    max_val.pop();
                }
                
                s.pop();
                break;
            }
            
            default:
            {
                cout<<max_val.top()<<endl;
            }
        }
        
        
    }
    
    return 0;
   
}

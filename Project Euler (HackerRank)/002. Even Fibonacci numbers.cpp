#include<iostream> 
using namespace std; 
  

int evenFibSum(int limit) 
{ 
    if (limit < 2) 
        return 0; 
   
    long long int ef1 = 0, ef2 = 2; 
    long long int sum = ef1 + ef2; 
   
    while (ef2 <= limit) 
    {  
        long long int ef3 = 4*ef2 + ef1; 
   
        if (ef3 > limit) 
            break; 
        ef1 = ef2; 
        ef2 = ef3; 
        sum += ef2; 
    } 
  
    return sum; 
} 
  
int main() 
{ 
    int limit = 400; 
    cout << evenFibSum(limit); 
    return 0; 
} 

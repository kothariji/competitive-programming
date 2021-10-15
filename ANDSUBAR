
Codechef question
You are given an integer N. Consider the sequence containing the integers 1,2,…,N in increasing order (each exactly once). Find the length of the longest subarray in this sequence such that the bitwise AND of all elements in the subarray is positive.

Input Format
The first line contains T denoting the number of test cases. Then the test cases follow.
Each test case contains a single integer N on a single line.
Output Format
For each test case, output on a single line the length of the longest subarray that satisfy the given property.

Constraints
1≤T≤105
1≤N≤109
Subtasks
Subtask 1 (100 points): Original constraints
Sample Input 1 
5
1
2
3
4
7
Sample Output 1 
1
1
2
2
4
Explanation
Test case 1: The only possible subarray we can choose is [1].

Test case 2: We can't take the entire sequence [1,2] as a subarray because the bitwise AND of 1 and 2 is zero. We can take either [1] or [2] as a subarray.

Test case 4: It is optimal to take the subarray [2,3] and the bitwise AND of 2 and 3 is 2.

Test case 5: It is optimal to take the subarray [4,5,6,7] and the bitwise AND of all integers in this subarray is 4.




// The code for ANDSUBAR is


#include<bits/stdc++.h>
#define z long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
   z t,x ,y ,k,N;
	cin>>t;
	while(t--)
	{
	    cin>>N;
	    /*if(N==2)
	    {
	        cout<<"1\n";
	    }
	    else if(N!=2)*/
	       for(int i=0;i<=N;i++) 
             {  
               if(pow(2,i)<=N) 
                 k=pow(2,i); 
               else if(pow(2,i)>N)
                 break;
             } 
	    
	  
	   x=k/2;
	 y=N-k+1;
	if(x >y) 
cout<<x<<endl;
      else if(x<y) 
     cout<<y<<endl;
     else
     cout<<x<<endl;
     x=0,y=0;
	    }
	 return 0;

}

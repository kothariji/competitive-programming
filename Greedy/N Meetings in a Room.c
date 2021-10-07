#include<stdio.h> 
  
// Prints a maximum set of activities that can be done by a single 
// person, one at a time. 
//  n   -->  Total number of activities 
//  s[] -->  An array that contains start time of all activities 
//  f[] -->  An array that contains finish time of all activities 
void printMaxActivities(int s[], int f[], int n) 
{ 
    int i, j; 
  
    printf ("Following activities are selected n"); 
    i = 0; 
    printf("%d ", i);  
    for (j = 1; j < n; j++) 
    {
      if (s[j] >= f[i]) 
      { 
          printf ("%d ", j); 
          i = j; 
      } 
    } 
} 
  
// driver program to test above function 
int main() 
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
       cin>>s[i];
    for(int i=0;i<n;i++)
       cin>>f[i];   
    printMaxActivities(s, f, n); 
    return 0; 
} 

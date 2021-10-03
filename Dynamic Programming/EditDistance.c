/* A Dynamic Programming based C program to find minimum 
   number operations to convert string1 to string2 */
#include <stdio.h>
#include <string.h>
// Utility function to find the minimum of three numbers 
int minimum_count(int c1, int c2, int c3) 
{ 
	if(c1<=c2 && c1<=c3)
	    return c1;
	if(c2<=c1 && c2<=c3)
	    return c2;
	else
	    return c3;
} 
int edit_DistDP(char str1[], char str2[], int Len1, int Len2) 
{ 
       // Create a table to store results of subproblems 
	int dp[Len1 + 1][Len2 + 1]; 
       // Fill d[][] in bottom up manner 
	for (int indexstr1 = 0; indexstr1 <= Len1; indexstr1++) { 
		for (int indexstr2 = 0; indexstr2 <= Len2; indexstr2++) { 
			/* If first string is empty, only option is to 
			   insert all characters of second string */
			if (indexstr1 == 0) 
                                // Min. operations = indexstr2
				dp[indexstr1][indexstr2] = indexstr2; 
			/*  If second string is empty, only option is to 
			    remove all characters of second string */
			else if (indexstr2 == 0) 
				dp[indexstr1][indexstr2] = indexstr1; // Min. operations = loop
                       /* If last characters are same, ignore last char 
			   and recur for remaining string */
			else if (str1[indexstr1 - 1] == str2[indexstr2 - 1]) 
				dp[indexstr1][indexstr2] = dp[indexstr1 - 1][indexstr2 - 1]; 
                      /* If the last character is different, consider all 
			  possibilities and find the minimum */
			else
                                dp[indexstr1][indexstr2] = 1 + mincount(dp[indexstr1][indexstr2 - 1], // Insert 
							        dp[indexstr1 - 1][indexstr2], // Remove 
								dp[indexstr1 - 1][indexstr2 - 1]); // Replace 
		} 
	} 
    return dp[Len1][Len2]; 
} 
// Driver program 
int main() 
{ 
	char s1[20];
        char s2[20];
        int n;
        printf("\n Input: ");
        printf("\n Enter the first string:");
        scanf("%[^\n]%*c", s1);
        printf("\n Enter the second string:");
        scanf("%[^\n]%*c", s2);
        n=edit_DistDP(s1, s2, strlen(s1), strlen(s2)); 
        printf("\n Output:");
        printf(" %d\n ", n);
	return 0; 
} 
/* 
Input:
Enter the first string: "sunday"
Enter the second string: "saturday"
Output: 3
*/
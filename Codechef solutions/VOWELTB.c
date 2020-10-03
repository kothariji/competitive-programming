//Author: Rakshit Naidu

#include <stdio.h>

int main(void) {
	// your code goes here
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
	return 0;
}


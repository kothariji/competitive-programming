#include <stdio.h>

int main() {
  long int t, a, b;
  scanf("%ld", & t);
  for (long int z = 0; z < t; z++) {
    scanf("%ld %ld", & a, & b);
   long int arr[a];
    for (long int i = 0; i < a; i++) {
      scanf("%ld", & arr[i]);
    }
    if (arr[0] < b) {
      printf("%ld\n",1);
    } else if (a == 1) {
      printf("%ld\n",((arr[0] / b) + 1));
    } else {
      long int s = arr[0] - b;
      for (long int m = 1; m < a; m++) {
        arr[m] = arr[m] + s;
        if (arr[m] < b) {
          printf("%ld\n",m+1);
          break;
        } else {
          s = arr[m] - b;
          if(m==a-1 && s>b)
          {
              printf("%ld\n",m+(s/b)+2);
              break;
          }
        }

      }
      
    }

  }
  return 0;
}
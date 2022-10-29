#ifndef POPCOUNT // To exclude double inclusion
#define POPCOUNT

// This has time constant proportional to the number of set bits, so it's a bit faster.
int popcount_1( int a)
{
  int n = 0;
  while(a)
  {
    n++;
    int b = a - 1;
    a &= b;
  }
  return n;
}

int popcount_0(int a)
{
  return popcount_1( ~a);
 }

#endif

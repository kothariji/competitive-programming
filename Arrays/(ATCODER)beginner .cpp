// Problem 1 . Atcoder beginner contest 185

// Problem Statement
// Takahashi has decided to hold some number of programming contests.Holding one contest requires
// one 100-point problem, one 200-point problem, one 300-point problem, and one 400-point problem.
// When he has A1,A2,A3,and A4 drafts of 100-,200-, 300-, and 400-point problems, respectively, at most how many contests can he hold?
// The same draft can be used only once.

// Constraints
// 1≤Ai≤100
// (1≤i≤4)
// All values in input are integers.
// Input
// Input is given from Standard Input in the following format:

// A1 A2 A3 A4

// Output
// Print an integer representing the maximum number of contests that can be held.

// Sample Input 1
// 5 3 7 11
// Sample Output 1
// 3
// By using three drafts for each slot, he can hold three contests. He has just three drafts for
// 200
// -point problems, so he cannot hold four.

// Sample Input 2
// 100 100 1 100
// Sample Output 2
// 1
// A contest cannot be held even if there is just one missing slot.

///////////////////////////////////////////////////////////////////////////////

My solution
#include <iostream>
    using namespace std;
int main()
{
  long int arr[5];
  for (int i = 0; i < 4; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + 4);
  cout << arr[0];

  return 0;
}

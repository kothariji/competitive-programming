// There is a frog on the 1st step of an N stairs long staircase. The frog wants to reach the Nth stair.
// HEIGHT[i] is the height of the (i+1)th stair.If Frog jumps from ith to jth stair, the energy lost in the jump is given by |HEIGHT[i-1] - HEIGHT[j-1] |.
// In the Frog is on ith staircase, he can jump either to (i+1)th stair or to (i+2)th stair. Your task is to find the minimum total energy used by the frog to reach from 1st stair to Nth stair.

// MEMOIZATION METHOD

#include <bits/stdc++.h>
using namespace std;

int minEnergy(int ind, vector<int> &height, vector<int> &dp)
{
    if (ind == 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int left = minEnergy(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
    int right = INT_MAX;
    if (ind > 1)
        right = minEnergy(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);
    return dp[ind] = min(left, right);
}

int main()
{
    int n;
    cin >> n;
    vector<int> height(n);
    vector<int> dp(n + 1, -1);
    for (int i = 0; i < n; i++)
        cin >> height[i];
    auto ans = minEnergy(n - 1, height, dp); // n - 1 because we are considering 0 based indexing.
    cout << ans;
}

// Time Complexity -> O(n);
// Space Complexity -> O(n) + O(n);

// TABULATION METHOD

// vector<int> dp(n + 1, -1);
// dp[0] = 0  -----> Base case in Recursion/Memoization method;
// for (int i = 1; i < n; i++)
// {
//     int firstStep = dp[i - 1] + abs(height[i] - height[i - 1]);
//     int secondStep = INT_MAX;
//     if (i > 1)
//         secondStep = dp[i - 2] + abs(height[i] - height[i - 2]);
//     dp[i] = min(firstStep, secondStep);
// }

// SPACE OPTIMIZED SOLUTION O(1);

//
//  int prev = 0;
//  int SecondPrev = 0;
// for (int i = 1; i < n; i++)
// {
//     int firstStep = prev + abs(height[i] - height[i - 1]);
//     int secondStep = INT_MAX;
//     if (i > 1)
//         secondStep = SecondPrev + abs(height[i] - height[i - 2]);
//     int current  = min(firstStep, secondStep);
//     SecondPrev = prev;
//     prev = current;
// }

// cout << prev;

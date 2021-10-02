#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
// Function to find the lexicographic rank of a string using
// `std::next_permutation`
int findLexicographicRank(string key)
{
    string str = key;
    int rank = 1;        // rank starts from 1
 
    // sort the string in ascending order
    sort(str.begin(), str.end());
 
    while (1)
    {
        // if the current permutation is equal to the key, return its rank
        if (key == str) {
            return rank;
        }
 
        // find next lexicographically ordered permutation
        if (!next_permutation(str.begin(), str.end())) {
            break;
        }
        rank++;
    }
}
 
int main()
{
    string key = "DCBA";
 
    cout << "The lexicographic rank of " << key << " is "
         << findLexicographicRank(key);
 
    return 0;
}

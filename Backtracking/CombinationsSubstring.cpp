#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
 
// Find all combinations of non-overlapping substrings of a given string
void findCombinations(string str, vector<string> &substring,
        set<vector<string>> &combinations)
{
    // if all characters of the input string are processed,
    // add the output string to result
    if (str.length() == 0)
    {
        vector<string> output(substring);
        combinations.insert(output);
        return;
    }
 
    // append each prefix `str[0, i]` to the output string and recur for
    // remaining substring `str[i+1, n-1]`
    for (int i = 0; i < str.length(); i++)
    {
        // push prefix `str[0, i]` into the output vector
        substring.push_back(str.substr(0, i + 1));
 
        // recur for the remaining string `str[i+1, n-1]`
        findCombinations(str.substr(i + 1), substring, combinations);
 
        // backtrack: remove current substring from the output vector
        substring.pop_back();
    }
}
 
set<vector<string>> findCombinations(string s)
{
    set<vector<string>> combinations;
 
    // base case
    if (s.length() == 0) {
        return combinations;
    }
 
    // vector to store non-overlapping substrings
    vector<string> substring;
 
    // find all non-overlapping substrings
    findCombinations(s, substring, combinations);
 
    return combinations;
}
 
// Utility function to print contents of the vector
void printVector(vector<string> const &out)
{
    for (auto str: out) {
        cout << str << " ";
    }
    cout << endl;
}
 
int main()
{
    // test input
    string str = "ABCD";
 
    // find all non-overlapping substrings
    set<vector<string>> combinations = findCombinations(str);
 
    for (vector<string> combination: combinations) {
        printVector(combination);
    }
 
    return 0;
}



#include <algorithm> // std::set_union, std::sort
#include <iostream> // std::cout
#include <vector> // std::vector
 
// Driver code
int main()
{
    int first[] = { 5, 10, 15, 20, 25 };
    int second[] = { 50, 40, 30, 20, 10 };
    int n = sizeof(first) / sizeof(first[0]);
 
    // Print first array
    std::cout << "First array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << first[i];
    std::cout << "\n";
 
    // Print second array
    std::cout << "Second array contains :";
    for (int i = 0; i < n; i++)
        std::cout << " " << second[i];
    std::cout << "\n\n";
 
    std::vector<int> v(10);
    std::vector<int>::iterator it, st;
 
    std::sort(first, first + n);
    std::sort(second, second + n);
 
    // Using default function
    it = std::set_union(first, first + n, second,
                        second + n, v.begin());
 
    std::cout << "The union has " << (it - v.begin())
              << " elements:\n";
    for (st = v.begin(); st != it; ++st)
        std::cout << ' ' << *st;
    std::cout << '\n';
 
    return 0;
}
#include <iostream>
using namespace std;


int main()
{
int iar1[] = {1,2,3,4,5};
int iar2[] = {1,2,3,4,5};

if (std::equal(std::begin(iar1), std::end(iar1), std::begin(iar2)))
    cout << "Arrays are equal.";
else
    cout << "Arrays are not equal.";
return 0;

}

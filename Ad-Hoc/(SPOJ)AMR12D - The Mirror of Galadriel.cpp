#include <iostream>
#include <string>
#include <map>
using namespace std;

int main () {
  int t;
  string tempStr;
  bool isMagical;
  scanf ("%d", &t);
  for (int z = 0; z < t; z++) {
    isMagical = true;
    cin >> tempStr;
    for (int i = 0; i < tempStr.length(); i++)
      if (tempStr[i] != tempStr[tempStr.length()-1-i])
        isMagical = false;
    if (isMagical)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
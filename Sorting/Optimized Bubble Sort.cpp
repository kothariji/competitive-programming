#include<iostream>
using namespace std;
 
void optimizedbubbleSort(int a[]) {
  int rounds = 0;
  for (int i = 0; i < 5; i++) {
    rounds++;
    int flag = false;
    for (int j = 0; j < (5 - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        flag = true;
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
    }
    if (flag == false) {
      break;
    }
  }
  cout << "No of rounds : " << rounds << endl;
}
 
int main() {
  int myarray[5];
  cout << "Enter 5 integers in any order: " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myarray[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
  cout << endl;
  optimizedbubbleSort(myarray); // sorting
 
  cout << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << myarray[i] << " ";
  }
 
  return 0;
}

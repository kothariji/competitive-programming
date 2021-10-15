#include<iostream>
using namespace std;
 
void insertionSort(int arr[]) {
  int key;
  int j = 0;
  for (int i = 1; i<5; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
 
}
 
int main() {
  int myarray[5];
  cout<<"Enter 5 integers in any order"<<endl;
  for (int i = 0; i<5; i++) {
    cin>>myarray[i];
  }
 
  cout<<"Before Sorting: "<<endl;
  for (int i = 0; i<5; i++) {
    cout<<myarray[i]<<" ";
  }
 
  insertionSort(myarray);
 
  cout<<endl<<"After Sorting: "<<endl;
  for (int i = 0; i<5; i++) {
    cout<<myarray[i]<<" ";
  }
 
  return 0;
}

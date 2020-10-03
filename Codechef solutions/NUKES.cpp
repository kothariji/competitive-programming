#include <iostream>
using namespace std;

int main() {
	int a,n,k;
	cin>>a>>n>>k;
	int * arr = new int[k]();
    // use the modulo ! why iterating !!! and then keep dividing A by n+1 because n got used to nuke last 
    for(int i =0;i<k;i++) {
        arr[i] = a%(n+1);
        a/=n+1;
    }
	for(int i =0;i<k;i++) {
	    std::cout << arr[i] << std::endl;
	}
	return 0;
}


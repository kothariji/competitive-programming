#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */

        long int_A = (long int)A;
        // cout << int_A << '\n';
        cout << hex << showbase << nouppercase << left << int_A << '\n';

        cout << dec << noshowbase << showpos << setfill('_') << setw(15) << right << fixed << setprecision(2) << B << '\n';
        cout << noshowpos << uppercase << left << setfill(' ') << setprecision(9) << scientific << C << '\n';


	}
	return 0;

}

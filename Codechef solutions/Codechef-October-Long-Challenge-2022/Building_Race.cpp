// Contest Code: OCT221
// Problem Code: BUILDINGRACE

/*  ------- PROBLEM STATEMENT ---------
Two friends Chef and Chefina are currently on floors AA and BB respectively. They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible.

Chef can climb down XX floors per minute while Chefina can climb down YY floors per minute. Determine who will reach the ground floor first. In case both reach the ground floor together, print Both.
*/

//SOLUTION:

#include <iostream>
using namespace std;

int main() {
    int turn;
    cin>>turn;
    while(turn--){
        int chefint,chefinaint,chef,chefina;
        cin>>chefint>>chefinaint>>chef>>chefina;
        double A = (double)chefint/chef;
        double B = (double)chefinaint/chefina;
        if((A) == (B)){
            cout<<"Both"<<endl;
        }
        else{
            if((A) < (B)){
                cout<<"Chef"<<endl;
            }else{
                cout<<"Chefina"<<endl;
            }
        }
    }
	return 0;
}

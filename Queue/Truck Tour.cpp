//https://www.hackerrank.com/challenges/truck-tour/problem

#include <bits/stdc++.h>
#include <vector>
#include <queue>

using namespace std;

/*************************************EDITABLE PART*********************/
int truckTour(vector<vector<int>> petrolpumps) {
    int n = petrolpumps.size();
    int petrolRemain = 0;
    int state = 0;
    
    for (int i=0; i<n; i++){
        int petrol = petrolpumps[i][0];     // get petrol value from matrix
        int distance = petrolpumps[i][1];   // get distance value from matrix
        petrolRemain += petrol - distance;
        
        // check if remaining petrol is empty, reset the counter, and start from the next pumpstation
        if (petrolRemain < 0){
            state = i+1;
            petrolRemain = 0;
        }
    }
return state;
}
/***********************************************************************/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> petrolpumps(n);
    for (int petrolpumps_row_itr = 0; petrolpumps_row_itr < n; petrolpumps_row_itr++) {
        petrolpumps[petrolpumps_row_itr].resize(2);

        for (int petrolpumps_column_itr = 0; petrolpumps_column_itr < 2; petrolpumps_column_itr++) {
            cin >> petrolpumps[petrolpumps_row_itr][petrolpumps_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = truckTour(petrolpumps);

    fout << result << "\n";

    fout.close();

    return 0;
}

//Problem Link : https://www.codechef.com/START14B/problems/TASKTIME

#include<bits/stdc++.h>
using namespace std;


#define int             long long



int32_t main()
{
     int t;
     cin>>t;
     while(t--) {

          int n, m, k;
          cin >> n >> m >> k;

          vector<vector<int>> v(m);

          int sub[n];
          int time[n];

          vector<int> ans;

          //INPUT

          for (int i = 0; i < n; i++) {
               cin >> sub[i];
               sub[i]--;
          }

          for (int i = 0; i < n; i++) {

               cin >> time[i];
               v[sub[i]].push_back(time[i]);
          }

          //SORT THE TOPICS TIME WISE
          //OBSERVE THAT SELECTING EVEN NUMBER OF SUBJECTS IS REDUNDANT
          //SO AFTER CHOOSING ONE SUBJECT, MAKE PAIRS OF THE REST>

          for (int i = 0; i < m; i++) {

               sort(v[i].begin(), v[i].end());
               if (v[i].size()) ans.push_back(v[i][0]);
               for (int j = 2; j < v[i].size(); j += 2) {

                    ans.push_back(v[i][j] + v[i][j - 1]);
               }
          }

          sort(ans.begin(), ans.end());


          int sum = 0;
          int cnt = 0;

          //COUNT THE NUMBER OF SELECTED ENTITIES

          for (int i = 0; i < ans.size(); i++) {

               if (sum + ans[i] <= k) {
                    cnt++;
                    sum += ans[i];
               }
               else break;
          }

          cout << cnt << endl;
     }
     return 0;
}

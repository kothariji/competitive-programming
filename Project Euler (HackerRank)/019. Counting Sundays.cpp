#include <bits/stdc++.h>
#define lli long long int
using namespace std;

const lli Sunday = 1;
lli getWeekday(lli year, lli month, lli day)
{
  if (month <= 2)
  {
    month += 12;
    year--;
  }

  return (day +
          13 * (month + 1) / 5 +
          year + year / 4 - year / 100 + year / 400)
         % 7;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    lli year1, year2;
    lli month1, month2, day1, day2;
    cin >> year1 >> month1 >> day1;
    cin >> year2 >> month2 >> day2; 

    if (year2 < year1 || (year2 == year1 && month2 < month1))
    {
      swap(year1,  year2);
      swap(month1, month2);
    }

    lli currentYear  = year1;
    lli currentMonth = month1;
    if (day1 > 1)
    {
      currentMonth++;
      if (currentMonth > 12)
      {
        currentMonth -= 12;
        currentYear++;
      }
    }

    lli sum = 0;

    while (currentMonth < month2 || currentYear < year2) 
    {
      if (getWeekday(currentYear, currentMonth, 1) == Sunday)
        sum++;

      currentMonth++;

      if (currentMonth > 12)
      {
        currentMonth -= 12;
        currentYear++;
      }
    }
    if (getWeekday(currentYear, currentMonth, 1) == Sunday)
      sum++;

    cout << sum << endl;
  }
  return 0;
}

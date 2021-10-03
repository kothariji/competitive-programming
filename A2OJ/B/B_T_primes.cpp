#include <bits/stdc++.h>
using namespace std;

bool isprime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

string check(long long int num)
{
    if (num < 2)
        return "NO";
    if (num == 4)
        return "YES";
    if (num % 2 == 0)
        return "NO";
    if (ceil(sqrt(num)) == floor(sqrt(num)))
    {
        if (isprime(sqrt(num)))
            return "YES";
        return "NO";
    }

    return "NO";
}
int main()
{
    long long int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        cout << check(num) << endl;
    }
}
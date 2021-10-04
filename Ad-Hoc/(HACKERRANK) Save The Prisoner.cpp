/*
 * Complete the 'saveThePrisoner' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 *  3. INTEGER s
 */

int saveThePrisoner(int n, int m, int s) {
    // n = people, m = candy, s = start
    if (m > n) {
        m = m % n;
    }
    
    int ans = s + m - 1;
    
    if (ans == 0) {
        ans = n;
    }
    
    if (ans > n) {
        ans = ans - n;
    }
    
    return ans;
}

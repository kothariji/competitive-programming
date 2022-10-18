// Link to problem - https://binarysearch.com/problems/Sum-of-the-Digits
// status - accepted ✅


int solve(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
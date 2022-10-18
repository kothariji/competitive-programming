// Link to problem - https://binarysearch.com/problems/Guess-the-Root
// status - accepted ✅

int solve(int n) {
    int square = n;
    int root = 0;
    int odd = 1;

    while (square != 0) {
        if (square - odd < 0) return root;

        square -= odd;
        odd += 2;
        root++;
    }

    return root;
}

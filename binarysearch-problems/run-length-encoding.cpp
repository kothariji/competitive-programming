// Link to problem - https://binarysearch.com/problems/Run-Length-Encoding

string solve(string s) {
    string res = "";
    int count = 0;
    char prevChar = s[0];

    if (!s.length()) return res;

    for (char x: s) {
        if (x == prevChar) {
            count++;
        } else {
            res += to_string(count);
            res += prevChar;

            prevChar = x;
            count = 1;
        }
    }

    res += to_string(count);
    res += prevChar;

    return res;
}
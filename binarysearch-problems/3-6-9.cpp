// Link to problem - https://binarysearch.com/problems/3-6-9
// status - accepted ✅

vector<string> solve(int n) {
    vector<string> res;

    for (int i=1; i<=n; i++) {
        string num = to_string(i);

        if (i < 3) {
            res.push_back(num);
        } else {
            bool isCase = num.find("3") != string::npos || num.find("6") != string::npos || num.find("9") != string::npos;

            if (i % 3 == 0 || isCase) {
                res.push_back("clap");
            } else {
                res.push_back(num);
            }
        }
    }

    return res;
}
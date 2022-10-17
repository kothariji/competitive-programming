// Link to problem - https://binarysearch.com/problems/Word-Machine
// status - accepted ✅

int solve(vector<string>& ops) {
    stack<int> stack;

    for (auto x: ops) {
        if (x == "POP") {
            if (!stack.empty()) {
                stack.pop();
            } else {
                return -1;
            }
        } else if (x == "DUP") {
            if (!stack.size()) {
                return -1;
            }
            stack.push(stack.top());
        } else if (x == "+") {
            if (stack.size() >= 2) {
                int one = stack.top();
                stack.pop();
                int two = stack.top();
                stack.pop();

                stack.push(one + two);
            } else {
                return -1;
            }
        } else if (x == "-") {
            if (stack.size() >= 2) {
                int one = stack.top();
                stack.pop();
                int two = stack.top();
                stack.pop();

                stack.push(one - two);
            } else {
                return -1;
            }
        } else {
            int num = stoi(x);
            stack.push(num);
        }
    }

    return stack.top();
}
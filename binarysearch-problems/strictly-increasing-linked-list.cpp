// Link to problem - https://binarysearch.com/problems/A-Strictly-Increasing-Linked-List
// status - accepted ✅


/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    int prev = INT_MIN;

    if (!head->next) return true;

    while (head->next) {
        if (head->val <= prev) {
            return false;
        }
        prev = head->val;
        head = head->next;
    }

    if (head->val <= prev) {
        return false;
    }

    return true;
}
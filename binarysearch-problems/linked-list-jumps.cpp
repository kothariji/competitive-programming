// Link to problem - https://binarysearch.com/problems/Linked-List-Jumps
// status - accepted ✅

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* node) {
    int val = 0;
    LLNode* headCpy = node;
    LLNode* ptrRef = NULL;

    if (!node->next) return node;

    while (headCpy->next) {
        if (val == 0) {
            val = headCpy->val;
            if (ptrRef) {
                ptrRef->next = headCpy;
            }
            ptrRef = headCpy;
        }
        headCpy = headCpy->next;
        val--;
    }

    if (val > 0) {
        ptrRef->next = NULL;
    } else {
        ptrRef->next = headCpy;
    }

    return node;
}
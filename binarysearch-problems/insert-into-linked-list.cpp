// Link to problem - https://binarysearch.com/problems/Insert-Into-Linked-List
// status - accepted ✅

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
LLNode* solve(LLNode* head, int pos, int val) {
    LLNode* newNode = new LLNode();
    newNode->val = val;
    
    if (pos == 0) {
        newNode->next = head;
        return newNode;
    } 

    if (!head->next) {
        head->next = newNode;
        return head;
    }

    int idx = 0;
    LLNode* headCpy = head;

    while (idx < pos-1) {
        headCpy = headCpy->next;
        idx++;
    }

    newNode->next = headCpy->next;
    headCpy->next = newNode;

    return head;
}
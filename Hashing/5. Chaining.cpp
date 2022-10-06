// Performance in Chaining

// m= no. of slots in Hash Table 
// n= no. of keys to be inserted
// Load Factor (alpha) = n/m

// Major Assumption in Calculating Chain Length is that all the keys are evenly distributed.

// Let the chain length be alpha

// So Time to search = O(1+alpha)
// Time to insert / delete = O(1+alpha)




// Major Data Structures for Storing Chains are:
// 1. Linked List  : Search in O(l), Delete and Insert in O(l)
//         Disavantage: It is not Cache Friendly.

// 2. Dynamic sized arrays: They are cache - friendly.

// 3. Self-Balancing BST (AVL Tree , Red-Black Tree)
//         Works in O(log l): searching, insertion and deletion.
//         Disavantage: it is also not cache - friendly.



// How Hashing Works??
// 1. Should always map a large key to small key.
// 2. Should generate values from 0 to m-1
// 3. should be fast, O(1) for integers and O(len) for string of length 'len'
// 3. should uniformly distribute large keys into hash table slots.


// Example for  hash Functions:

// 1. h(large_key) = large_key % m
// *** CHOOSING CRITERIA FOR m ***
// preferably good value of m might be a prime number which are not close to powers.
// and a bad value for m might be a power of 2 or 10.

// 2. For strings, weighted sum

//         str[] = "abcd"

//   ( str[0]*(x^0) + str[1]*(x^1) + str[2]*(x^2) + str[3]*(x^4) ) % m

// 3. Universal Hashing: Group of hash functions in which we pick one hash function randomly



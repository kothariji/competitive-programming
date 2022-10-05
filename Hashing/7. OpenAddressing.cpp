// In Open Addressing we have:

// 1. Number of Slots in Hash Table >= Number of Keys to be inserted
// 2. Cache Friendly

// ***** Linear Probing *****
// It Linearly searches for the next empty slot when there is a collision.

// Searching in Open Addressing:
// We Compute hash function . We go to that index and compare. If we find, we return true, Otherwise we linearly Hash.
// We Stop when one of the three condition arises:
//         1. Empty Slot
//         2. Key Found
//         3. Traversed through the whole table.


// **** Problem with simply making slot empty when we delete ****
// Never empty the deleted slot, Just mark it as Deleted and never stop on the "deleted" mark slot while searching But You can always insert in that "deleted" mark slot  

// **** ALWAYS STOP ON THE EMPTY SLOT NOT ON THE DELETED SLOT ****

// LINEAR Probing Problem : Clustering

// Solution of Clustering is: 
//     1. Quadratic Probing
//         hash(key,i)=(h(key)+ i^2)%m

//         Problem of Clustering still exists in quadratic probing.
//         Its just that we have primary clusters in linear probing and secondary clusters in quadratic probing.

//         Another problem with the quadratic probing is that we might not find empty slots even if empty slots are present in Hash Table.


//     2. Double Hashing
//         hash(key,i)=(h1(key) + i*h2(key))%m

//     It avoids clustering.

//     If h2(key) is relatively prime to m , then it always find a free slot if there is one.

//     Distributes keys more uniformly than linear probing and quadratic hashing.
//     No Clustering.

    
    
//     ***** Open Addressing *****

//     void doubleHashingInsert(key)
//     {
//         if(table is full)
//           return error;

//         probe = h1(key) , offset = h2(key)

//         while(table[probe] is occupied)
//             probe = (probe + offset) % m;

//         table[probe] = key ;      
//     }


//     Performance Analysis of search (Unsuccessful)

//     alpha= n/m (should be <=1)

//     Assumption: Every Probe sequence looks at a random loacation.
    
//     (1-aplha) fraction of the table is empty

//     So Expected number of probes required = 1/(1-alpha)


         

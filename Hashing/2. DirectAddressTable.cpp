// Direct Address Table:

// Imagine a situation where you have 1000 keys with values from (0 to 999), how would you implement following in O(1) time

//given that we have keys from 1000 - 1999 

delete(i)
{
    table[i-1000] =0
}

insert(i)
{
    table[i-1000] = 1;
}

search(i)
{
   return[i-1000];
}

//Does not handle large values.
//Does not handle Floating - point numbers.


// [+] -------------- Iterative Approach -------------- [+] 
const BinarySearch = (arr, item, low = 0, high = arr.length - 1 ) => {
  while(low <= high) {
    // Middle item of the array
    const mid = Math.floor((low + high) / 2);

    if (arr[mid] === item) {
      // item found => return its index
      return mid;
    }

    if (arr[mid] > item) {
      // arr[mid] is greater than item => low <= item < mid
      high = mid - 1;
    } else {
      // arr[mid] is lesser than item => mid < item <= high
      low = mid + 1;
    }
  } 

  // if low > high => we have searched the whole array an d not found the item.
  return -1;
}


// [+] -------------- Recursive Approach -------------- [+] 
const BinarySearchRecursive = (arr, item, low = 0, high = arr.length - 1) => {
  const mid = Math.floor((low + high) / 2);

  if (low <= high) {
    // Base Case
    if (arr[mid] === item) {
      // item found => return its index
      return mid; 
    }

    if (item > arr[mid]) {
      // arr[mid] is lower than item => mid < item <= high
      return BinarySearchRecursive(arr, item, mid + 1, high);
    } else {
      // arr[mid] is greater than item => low <= item < mid
      return BinarySearchRecursive(arr, item, low, mid - 1);
    }
  } else {
    // we searched through whole array and didn't found the item
    return -1;
  }
}

/* ---------------------------------- Test ---------------------------------- */

const arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

console.log(BinarySearch(arr, 3)); // => 2
console.log(BinarySearchRecursive(arr, 2)); // => 1
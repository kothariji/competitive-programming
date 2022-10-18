// Link to Problem - https://binarysearch.com/problems/Set

class CustomSet {
  constructor() {
    this.arr = [];
  }

  add(val) {
    this.arr.push(val);
  }

  exists(val) {
    for (let x = 0; x < this.arr.length; x++) {
      if (this.arr[x] === val) return true;
    }

    return false;
  }

  remove(val) {
    while (this.arr.indexOf(val) > -1) {
      this.arr.splice(this.arr.indexOf(val), 1);
    }
  }
}

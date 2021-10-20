class Node {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
    this.tail = this.head;
  }

  /**
   * Append a node to the end of the linked list
   * @param {any} value
   * */
  append(value) {
    const newNode = new Node(value);

    if (!this.head) {
      this.head = newNode;
      this.tail = newNode;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
    this.size++;
  }

  /**
   * Prepend a node to the start of the Linked list
   * @param {any} value
   * */
  prepend(value) {
    const newNode = new Node(value);

    newNode.next = this.head;
    this.head = newNode;
    this.size++;
  }

  /**
   * Insert: Adding a node at a specific index
   * @param {any} value
   * @param {number} index
   * */
  insert(value, index) {
    if (index < 0 || index > this.size) {
      // Append the node to the end of the linked list
      return this.append(value);
    }

    if (index === 0) {
      // Prepend a node to the start of the linked list
      return this.prepend(value);
    }

    const newNode = new Node(value);
    const { previousNode, nextNode } = this.getPrevNextNodes(index);

    previousNode.next = newNode;
    newNode.next = nextNode;
    this.size++;
  }

  /**
   * Lookup a node at specific index
   * @param {number} index
   * @return {node} node
   * */
  lookup(index) {
    let counter = 0;
    let currentNode = this.head;

    while (counter < index) {
      currentNode = currentNode.next;
      counter++;
    }
    return currentNode;
  }

  /**
   * Remove a node from a specific index
   * @param {number} index
   * */
  remove(index) {
    let removedNode = null;

    if (index < 0 || index >= this.size) {
      // invalid index
      return false;
    }

    if (index === 0) {
      let curr = this.head;
      this.head = curr.next;
      removedNode = curr;
    } else {
      let { previousNode, nextNode } = this.getPrevNextNodes(index);
      // change the pointer of previous node to next node of current node.
      previousNode.next = nextNode.next;

      if (index === this.size - 1) {
        // Point the tail to the new last element
        this.tail = previousNode;
      }
      removedNode = nextNode;
    }

    this.size--;
    return removedNode;
  }

  /**
   * Checks if the list is empty or not
   * */
  isEmpty() {
    return this.size ? false : true;
  }

  /**
   * Get previous and next nodes
   * @param {number} index
   * */
  getPrevNextNodes(index) {
    let count = 0;
    let previousNode = this.head;
    let nextNode = previousNode.next;

    while (count < index - 1) {
      previousNode = previousNode.next;
      nextNode = previousNode.next;
      count++;
    }

    return { previousNode, nextNode };
  }
}

const ll = new LinkedList();
console.log(ll.isEmpty()); // => true

ll.append(1);
ll.append(2);
ll.append(3);

console.log(ll.remove(0)); // => 1
console.log(ll.lookup(0)); // => 2

ll.insert(1, 0); // inserts value "1" at the start (0th index) of the linked list
console.log(JSON.stringify(ll, null, 2)); // prints the linked list

import sys
sys.setrecursionlimit(10**6)

class Node:
    def __init__(self, val, pos):
        self.left = None
        self.right = None
        self.pos = pos
        self.val = val

def insert(node, val, pos):
    if node is None:
        print(pos)
        return Node(val, pos)
    if val < node.val: # move to left child
        node.left = insert(node.left, val, 2*pos)
    else: # move to right child
        node.right = insert(node.right, val, 2*pos+1)
    return node

def minValueNode(node):
    current = node
    while current.left is not None:
        current = current.left
    return current

def delete(node,val, case=True):
    if node is None:
        return node
    # search 
    if val < node.val: # move to left child
        node.left = delete(node.left, val, case)
    elif val > node.val: # move to right child
        node.right = delete(node.right, val, case)
    else: # here found 
        if case:
            print(node.pos)
        # Now delete node and replacement
        if node.left is None and node.right is None: # check left child, if None 
            node = None
        elif node.left is None:
            node = node.right
        elif node.right is None:
            node = node.left
        else:
            temp = minValueNode(node.right)
            node.val = temp.val
            node.right = delete(node.right, temp.val, False)
    return node
root = None
def main(q):
    global root
    oper, elem = input().split()
    if oper == 'i':
        root = insert(root, int(elem), 1)
    else:
        root = delete(root, int(elem), True)
    if q>1:
        main(q-1)
main(int(input()))
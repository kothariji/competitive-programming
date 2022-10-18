# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getAllElements(self, root1: TreeNode, root2: TreeNode) -> List[int]:
        list1 = []
        list2 = []
        def inorder(root, arr):
            if not root:
                return
            inorder(root.left, arr)
            arr.append(root.val)
            inorder(root.right, arr)
        inorder(root1, list1)
        inorder(root2, list2)
        return sorted(list1 + list2)

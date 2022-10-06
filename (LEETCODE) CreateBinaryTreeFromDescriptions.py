# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def createBinaryTree(self, descriptions: List[List[int]]) -> Optional[TreeNode]:
        nodes = {}
        children = set()
        vertices = set()
        for description in descriptions:
            parentVal = description[0]
            childVal = description[1]
            isLeft = description[2]
            vertices.add(parentVal)
            vertices.add(childVal)
            children.add(childVal)
            if parentVal in nodes:
                parent = nodes[parentVal]
            else:
                parent = TreeNode(parentVal)
            if childVal in nodes:
                child = nodes[childVal]
            else:
                child = TreeNode(childVal)
            if isLeft:
                parent.left = child
            else:
                parent.right = child
            nodes[parentVal] = parent
            nodes[childVal] = child
        root = list(vertices - children)[0]
        return nodes[root]

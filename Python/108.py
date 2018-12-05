# Convert Sorted Array to Binary Search Tree
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """
        def toBST(nums, start, end):
            if start > end:
                return None
            mid = (start + end) // 2
            node = TreeNode(nums[mid])
            node.left = toBST(nums, start, mid - 1)
            node.right = toBST(nums, mid + 1, end)
            return node
        return toBST(nums, 0, len(nums) - 1)


# official
class Solution:
    def sortedArrayToBST(self, nums):
        """
        :type nums: List[int]
        :rtype: TreeNode
        """

        def helper(l, r, nums):
            if l > r:
                return None
            m = (l + r) // 2
            node = TreeNode(nums[m])
            node.left = helper(l, m - 1, nums)
            node.right = helper(m + 1, r, nums)
            return node

        return helper(0, len(nums) - 1, nums)
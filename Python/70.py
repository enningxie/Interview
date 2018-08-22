# Climbing Stairs
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        pre = cur = 1
        for i in range(1, n):
            pre, cur = cur, pre + cur
        return cur


if __name__ == '__main__':
    s = Solution()

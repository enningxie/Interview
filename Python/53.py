class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l = g = -1000000000
        for n in nums:
            l = max(n,l+n)
            g = max(l,g)
        return g


# official
class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = nums[0]
        max = dp
        for i in range(1, len(nums)):
            dp = nums[i] + dp if dp > 0 else nums[i]
            if dp > max:
                max = dp
        return max



if __name__ == '__main__':
    s = Solution()
    test_nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    # print(sum(test_nums[3: 6]))
    print(s.maxSubArray(test_nums))
# Single Number
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sorted_nums = sorted(nums)
        for i, num in enumerate(sorted_nums[:-1]):
            if i % 2 == 0:
                if num != sorted_nums[i + 1]:
                    return num
            else:
                if num != sorted_nums[i - 1]:
                    return num
        return sorted_nums[-1]


class Solution_(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        x = 0

        for n in nums:
            x ^= n

        return x


if __name__ == '__main__':
    s = Solution()
    nums = [0, 1, 2, 1, 2]
    result = s.singleNumber(nums)
    print(result)
# Move Zeroes
class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        count_zero = 0
        for num in nums:
            if num == 0:
                count_zero += 1

        for _ in range(count_zero):
            nums.remove(0)
            nums.append(0)


if __name__ == '__main__':
    test_nums = [0, 1, 0, 3, 12]
    s = Solution()
    s.moveZeroes(test_nums)
    print(test_nums)
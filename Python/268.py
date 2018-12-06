# Missing Number
class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num_total = sum(nums)
        n = len(nums)
        total = (n * (n + 1)) / 2

        return int(total - num_total)


# # official
# class Solution:
#     def missingNumber(self, nums):
#         """
#         :type nums: List[int]
#         :rtype: int
#         """
#         length=len(nums)
#         return (int((length**2+length)/2))-sum(nums)


if __name__ == '__main__':
    s = Solution()
    input_ = [9,6,4,2,3,5,7,0,1]
    print(s.missingNumber(input_))

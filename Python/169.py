# Majority Element

class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        from collections import Counter
        nums_ = sorted(Counter(nums).most_common(), key=lambda x: x[1])
        nums_.reverse()
        return nums_[0][0]


## hahahaha
class Solution_(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        import random
        while True:
            r = random.choice(nums)
            if nums.count(r) > len(nums)/2:
                return r


if __name__ == '__main__':
    s = Solution()
    test_nums = [3, 2, 3]
    result = s.majorityElement(test_nums)
    print(result)
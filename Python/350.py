# Intersection of Two Arrays II
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        result = []
        if len(nums1) > len(nums2):
            max_ = nums1
            min_ = nums2
        else:
            max_ = nums2
            min_ = nums1
        for min_value in min_:
            if min_value in max_:
                result.append(min_value)
                max_.remove(min_value)
        return result


if __name__ == '__main__':
    s = Solution()
    nums1 = [1, 2, 2, 1]
    nums2 = [2, 2]
    result = s.intersect(nums1, nums2)
    print(result)
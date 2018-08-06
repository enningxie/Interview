# Sum of Two Integers
class Solution(object):
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        if a == 0:
            return b
        return self.getSum((a & b) << 1, a ^ b)


if __name__ == '__main__':
    a = 1
    b = 2
    s = Solution()
    print(s.getSum(a, b))
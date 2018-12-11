# Power of Three
class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == 1:
            return True
        if n < 3:
            return False
        while n % 3 == 0:
            n /= 3
        if n != 1:
            return False
        else:
            return True


# # official
# class Solution:
#     def isPowerOfThree(self, n):
#         """
#         :type n: int
#         :rtype: bool
#         """
#         ## ===== original =========
#         # if n<=0:
#         #     return False
#         # while n%3==0:
#         #     n=n/3
#         # return n==1
#
#         ## ======= method2 =========
#         # // 1162261467 is 3^19,  3^20 is bigger than int
#         return (n > 0 and 1162261467 % n == 0)


if __name__ == '__main__':
    s = Solution()
    print(s.isPowerOfThree(27))
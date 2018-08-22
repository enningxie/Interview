# happy number
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        dict_ = {}
        while True:
            if n in dict_:
                return False
            dict_[n] = 1
            last = 0
            for i in str(n):
                last += pow(int(i), 2)
            if last == 1:
                return True
            n = last


if __name__ == '__main__':
    s = Solution()
    input_ = 12
    result = s.isHappy(input_)
    print(result)
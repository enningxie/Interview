# Fizz Buzz
class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        result = []
        for i in range(1, n + 1):
            if i % 3 == 0:
                if i % 5 == 0:
                    result.append('FizzBuzz')
                else:
                    result.append('Fizz')
            elif i % 5 == 0:
                if i % 3 == 0:
                    result.append('FizzBuzz')
                else:
                    result.append('Buzz')
            else:
                result.append(str(i))
        return result


if __name__ == '__main__':
    n = 15
    s = Solution()
    print(s.fizzBuzz(n))
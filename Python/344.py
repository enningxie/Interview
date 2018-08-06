# Reverse String
class Solution(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        s_list = list(s)
        s_list.reverse()
        return ''.join(s_list)


# official code
class Solution_(object):
    def reverseString(self, s):
        """
        :type s: str
        :rtype: str
        """
        return s[::-1]


if __name__ == '__main__':
    s = Solution()
    test_string = 'hello'
    result = s.reverseString(test_string)
    print(result)

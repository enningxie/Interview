# Valid Anagram
class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s_list = sorted(list(s))
        t_list = sorted(list(t))
        if len(s_list) != len(t_list):
            return False
        for i in range(len(s_list)):
            if s_list[i] != t_list[i]:
                return False
        return True


if __name__ == '__main__':
    s = Solution()
    test_s = 'rat'
    test_t = 'car'
    result = s.isAnagram(test_s, test_t)
    print(result)
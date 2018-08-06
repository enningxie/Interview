# First Unique Character in String
class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        from collections import Counter
        bad_guys = []
        s_list = sorted(Counter(list(s)).most_common(), key=lambda x: x[1], reverse=True)

        for key, count_ in s_list:
            if count_ != 1:
                bad_guys.append(key)

        for i, c in enumerate(list(s)):
            if c not in bad_guys:
                return i
        return -1


if __name__ == '__main__':
    s = Solution()
    test_s = 'loveleetcode'
    result = s.firstUniqChar(test_s)
    print(result)
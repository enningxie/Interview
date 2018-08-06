# Jewels and Stones
class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        result = 0
        j_list = list(J)
        s_list = list(S)
        for s in s_list:
            if s in j_list:
                result += 1
        return result


if __name__ == '__main__':
    s = Solution()
    J = 'aA'
    S = 'aAAbbbb'
    result = s.numJewelsInStones(J, S)
    print(result)
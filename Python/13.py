# Roman to Integer
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        work_dict = {
            'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000
        }
        s_list = list(s)
        result = 0
        for i, c in enumerate(s_list):
            if c in ['I', 'X', 'C'] and i + 1 < len(s_list) and work_dict[c] < work_dict[s_list[i+1]]:
                result -= work_dict[c]
            else:
                result += work_dict[c]
        return result


if __name__ == '__main__':
    s = Solution()
    test_s = 'MCMXCIV'
    result = s.romanToInt(test_s)
    print(result)
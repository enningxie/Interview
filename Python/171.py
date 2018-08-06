# Excel Sheet Column Number
class Solution(object):
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        alphabet = {'A': 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8, 'I': 9, 'J': 10, 'K': 11, 'L': 12, 'M': 13, 'N': 14,
            'O': 15, 'P': 16, 'Q': 17, 'R': 18, 'S': 19, 'T': 20, 'U': 21, 'V': 22, 'W': 23, 'X': 24, 'Y': 25, 'Z': 26
        }

        s_list = list(s)
        s_list.reverse()
        sum = 0
        for i, s_ in enumerate(s_list):
            if i == 0:
                sum += alphabet[s_]
            else:
                sum += pow(26, i)*alphabet[s_]
        return sum


if __name__ == '__main__':
    s = Solution()
    s__ = 'AAA'
    print(s.titleToNumber(s__))
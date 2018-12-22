# Number of 1 Bits
class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        from collections import Counter
        bits_str = bin(n)
        counter_bit = Counter(bits_str[2:])
        return(counter_bit['1'])



# official
class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        return bin(n).count('1')


if __name__ == '__main__':
    print(bin(11))
    print(type(bin(128)))
    s = Solution()
    s.hammingWeight(128)
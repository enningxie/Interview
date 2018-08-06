# Best Time to Buy and Sell Stock
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        length = len(prices)
        if length == 0:
            return 0
        min_ = prices[0]
        max_ = 0
        for i in range(1, length):
            min_ = min(min_, prices[i])
            max_ = max(max_, prices[i] - min_)
        return max_


if __name__ == '__main__':
    s = Solution()
    prices = []
    result = s.maxProfit(prices)
    print(result)
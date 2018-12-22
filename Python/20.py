# Valid Parentheses
class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        left = ['(', '{', '[']
        right = [')', '}', ']']

        tmp_list = []
        for i in s:
            if i in left:
                tmp_list.append(i)
            if i in right:
                if len(tmp_list) == 0:
                    return False
                if right.index(i) == left.index(tmp_list[-1]):
                    tmp_list.pop()
                else:
                    return False
        if len(tmp_list) > 0:
            return False
        return True

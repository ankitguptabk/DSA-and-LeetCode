class Solution(object):
    def minimumLength(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        m = {}
        for x in s:
            m[x] = m.get(x, 0)+1 

        for x in m.values():
            if x % 2 == 0:
                ans += 2
            else:
                ans += 1

        return ans

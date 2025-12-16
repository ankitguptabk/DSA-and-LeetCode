class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """
        ans=0
        for i in range(len(n)):
            ans=max(ans, int(n[i]))
            if(ans==9): return 9
        return ans
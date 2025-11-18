class Solution(object):
    def minimumOperations(self, n):
        """
        :type nums: List[int]
        :rtype: int
        """
        ans=0
        for i in range(len(n)):
            ans+=min(n[i]%3,3-(n[i]%3))
        return ans
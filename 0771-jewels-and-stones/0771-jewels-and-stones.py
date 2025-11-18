class Solution(object):
    def numJewelsInStones(self, j, s):
        """
        :type jewels: str
        :type stones: str
        :rtype: int
        """
        ans=0
        for i in range(len(s)):
            for k in range(len(j)):
                if(j[k]==s[i]): ans+=1
        return ans
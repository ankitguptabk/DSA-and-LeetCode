class Solution(object):
    def findWordsContaining(self, w, x):
        """
        :type words: List[str]
        :type x: str
        :rtype: List[int]
        """
        a=[]
        for i in range(len(w)):
            if x in w[i]:
                a.append(i)
        return a
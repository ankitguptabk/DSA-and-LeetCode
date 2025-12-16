class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        a=[]
        for i in range(n):
            a.append(nums[i])
            a.append(nums[i+n])
        return a
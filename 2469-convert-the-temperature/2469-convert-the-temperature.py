class Solution(object):
    def convertTemperature(self, c):
        """
        :type celsius: float
        :rtype: List[float]
        """
        return [c+273.15000, c*1.80+32.00000]
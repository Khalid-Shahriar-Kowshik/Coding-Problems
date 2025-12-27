class Solution:
    def trailingZeroes(self, n: int) -> int:

        zeros=0
        factor=5

        while (int(n/factor)!=0):
            zeros += int(n/factor)
            factor*=5
        return zeros        
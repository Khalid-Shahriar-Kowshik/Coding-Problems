
class Solution:
    def majorityElement(self, nums: List [int]) -> int:
        count= {}
        maj,maj_count=0,0

        for n in nums:
            count[n]= 1+ count.get(n,0)
            if count> maj_count:
                maj=n 
                maj_count=count[n]
        return maj 

class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:

        window= set()
        lower=0

        for higher in range(len(nums)):
            if higher-lower>k:
                window.remove(nums[lower])
                lower+=1
            if nums[higher] in window:
                return True
            window.add(nums[higher])
        return False
            
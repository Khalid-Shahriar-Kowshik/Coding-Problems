class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        contains=set()

        for i in nums:
            if i in contains:
                return True
            else:
                contains.add(i)
        return False
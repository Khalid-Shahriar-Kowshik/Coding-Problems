class Solution:
    #LeetCode solution to Kth smallest element
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort(reverse=True)
        return nums[k-1]
            

        
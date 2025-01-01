class Solution:
    #geekforgeeks problem : minimize the heights 2
    def getMinDiff(self, arr, k):
        arr.sort()
        diff = arr[-1] - arr[0]
        for i in range(1, len(arr)):
            if arr[i] >= k:
                diff = min(diff, max(arr[-1] - k, arr[i - 1] + k) - min(arr[0] + k, arr[i] - k))
        return diff

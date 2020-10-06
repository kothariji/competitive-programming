class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        n = len(nums)
        if n<=1: return nums
        result = []
        nums.sort()
        next_idx = [-1]*n
        sizes = [1]*n
        max_len=1
        max_idx = 0
        for i in range(n-1,-1,-1):
            j = i+1
            _max,_max_idx = 0,i
            while j<n:
                if nums[j]%nums[i]==0 and sizes[j]>_max:
                    _max = sizes[j]
                    _max_idx=j
                j+=1
            if _max_idx!=i:
                sizes[i] += sizes[_max_idx]
                next_idx[i] = _max_idx
                if _max+1 > max_len:
                    max_len = _max+1
                    max_idx = i
        curr = max_idx
        while curr>=0:
            result.append(nums[curr])
            curr = next_idx[curr]
        return result

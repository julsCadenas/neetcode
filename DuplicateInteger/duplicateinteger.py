class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        x = len(nums)
        nums.sort()
        for i in range(1, x):
            if(nums[i]==nums[i-1]):
                return True
        return False
         
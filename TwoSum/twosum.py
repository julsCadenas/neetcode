class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        x=len(nums)
        y={}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in y:
                return [y[complement], i]
            y[nums[i]] = i
        
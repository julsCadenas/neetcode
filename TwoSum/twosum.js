class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
    const map = new Map()
    for(let i=0; i<nums.length; i++){
        const complement = target - nums[i] 
        const index = map.get(complement)
        const findTarget = map.has(complement)
        if(findTarget){
            return [index, i]
        }
        map.set(nums[i], i)
    }
    return [-1,-1]
    }
}

class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let length = nums.length
        let sorted = nums.sort()
        for(let i=0; i<length; i++){
            if(sorted[i]==sorted[i-1]){
                return true;
            } 
        } return false;
    };
}
    
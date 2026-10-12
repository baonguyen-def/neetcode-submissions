class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={};
        for i,n in enumerate(nums):
            second=target-n
            if second in dict:
                return [dict[second],i]
            dict[n]=i;
        return 
        
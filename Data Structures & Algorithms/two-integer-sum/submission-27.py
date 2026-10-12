class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict={};
        # tạo 2 biến i và n lần lượt là lưu index và value vì đang dùng enumerate nên cần 2 biến
        for i,n in enumerate(nums):
            second=target-n
        # second lúc này sẽ được xem là index    
            if second in dict:
                return [dict[second],i]
        #đổi value thành index để so sánh
            dict[n]=i;
        return 
        
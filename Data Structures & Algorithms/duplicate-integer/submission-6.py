class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # tạo hàm count kiểu dict 

        count={}
        for i in nums:
        # đếm số lần xuất hiện của các idenx trong hàm nums và cộng vào values 
            count [i]=count.get(i, 0)+ 1
        for c in count.values():
            # check số lần xuất hiện 
            if c>=2:
                return True
        return False 
            

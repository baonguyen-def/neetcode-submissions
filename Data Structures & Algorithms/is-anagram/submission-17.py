class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        """ kiểm tra nhanh độ dài 2 chuỗi có bằng nhau không"""
        if len(s) != len(t):
            return False 
        """ dùng Counter trong lớp Counter có sẵn để check"""
        return Counter(s) == Counter(t)
        
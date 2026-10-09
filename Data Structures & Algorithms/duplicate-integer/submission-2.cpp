class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // tạo hashtable//
        unordered_map <int , int> map;
        // tạo vòng lặp duyệt hết mảng hasDuplicate//
        for ( int i: nums)
        map[i]++;// với mỗi index xuất hiện, map tự động cộng 1 vào value//

        //kiểm tra số lần lặp lại //
        for (auto i: map)
        {
            if (i.second >=2)
            return true;
        }
        return false;
    }
};
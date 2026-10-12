class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // tạo 2 mảng,1 mảng để lưu index, một hash table để tìm//
        vector<int> res;
        unordered_map< int , int> sol;
        for ( int i=0; i<nums.size(); i++)
        // ko dùng for( int i: nums) vì i chỉ lấy value, không lấy index
        {
            // tìm số thứ 2//
            int second= target-nums[i];
            //dùng hash_table để tìm số thứ 2 trong toàn bộ bảng băm//
            if(sol.find(second)!= sol.end())
            {
                //nếu có sẽ trả về , sol[second]=index//
                return {sol[second], i};
        }
        //nếu không có,
        sol.emplace(nums[i], i);
        
        
    }
    return res;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // tạo 2 mảng,1 mảng để lưu index, một hash table để tìm//
        vector<int> res;
        unordered_map< int , int> sol;
        for ( int i=0; i<nums.size(); i++)
        // ko dùng for( int i: nums) vì i chỉ lấy value, không lấy index
        {
            int second= target-nums[i];
            if(sol.find(second)!= sol.end())
            {
                return {sol[second], i};
        }
        else sol [nums[i]]=i;
        
        
    }
    return res;
    }
};

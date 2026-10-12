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
        //nếu không có, cập nhật giá trị của i và i vào bảng băm
        sol.emplace(nums[i], i);
        
        
    }
    return res;
    }
};

// cách hoạt động của bài toán như sau: lúc đầu bảng băm trống, nên khi nhận phần tử đầu tiên , bảng băm sẽ không có gì trả về mà thêm vào và nhảy sang phần tử kế tiếp. Sau đó bảng sẽ lấy phần tử second rồi so với các giá trị đã được thêm vào trước đó coi có tồn tại chưa.//

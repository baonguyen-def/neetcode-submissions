class Solution{
public:
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> res;
    unordered_map <int,int> hash_table ;
    for( int i=0;i<nums.size();i++)
    {
        int second=target-nums[i];
        if(hash_table.find(second)!=hash_table.end())
        {
            res.push_back(hash_table[second]);
            res.push_back(i);
            break;
            }
        else{
            hash_table[nums[i]]=i;
        }
        
    } 
    return res;

}
};
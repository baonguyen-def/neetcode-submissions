class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map< int, int> map;
        for ( int i: nums)
        map[i]++;
        
        for ( auto i: map )
        { 
            if (i.second>=2)
            return true;
        }
        return false;

    }
};
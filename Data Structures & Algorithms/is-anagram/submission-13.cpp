class Solution {
public:
    bool isAnagram(string s, string t) {
        // so sánh độ dài của 2 chuỗi, nếu ko bằng thì trả về false
        if (s.length()!=t.length())
        return false; 


        // tạo hastable, check từng key trong cả 2 chuỗi ký tự , mỗi key sẽ được cộng và trừ 
        unordered_map< char, int> map;
        for (char c: s)
        map[c]++;
        for (char c: t)
        map[c]--;
        
        // check value trong hastable, nếu có cái nào không bằng 0 thì false, ngược lại , sau khi duyệt hết và tất cả đều bằng 0 trả về  true 
        for ( auto c: map){
            if( c.second != 0 )
            return false;
        

        
        }
        return true; 


    }
};

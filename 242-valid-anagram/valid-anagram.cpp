class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        else{
            std::sort(s.begin(), s.end());
            std::sort(t.begin(), t.end());
            if(s == t){
                return true;
            }else{
                return false;
            }
        }
    }
};
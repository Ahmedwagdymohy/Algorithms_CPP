class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        auto it = std::adjacent_find(nums.begin(), nums.end());
        if(it != nums.end() ){ //adjacent found
            return true;
        }else{
            return false;
        }
    }
};
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> answer;
        std::vector<int>::iterator it1;
        std::vector<int>::iterator it2;
        for(it1=nums.begin(); it1 != nums.end(); it1++ ){
            for(it2=it1+1; it2 != nums.end(); it2++ ){
            if((*it1 + *it2) == target){
                size_t index1 = std::distance(nums.begin(), it1);
                size_t index2 = std::distance(nums.begin(), it2);
                answer.push_back(index1);
                answer.push_back(index2);
            }
        }
        }
        return answer;
    }
};
#include <vector>
#include <unordered_map>
class Solution {
public:
    std::vector<int> TwoSum(std::vector<int>& nums, int target) {
        int x;
        std::unordered_map<int, int>  m;
        for(int i = 0; i < nums.size(); i++)
        {
            x = target - nums[i];
            auto it = m.find(x);
            if(it == m.end())
            {
                m.insert({nums[i], i});
            } else
            {
                return {i, it->second};
            }
        }
        return {};
    }
};
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans;
        ans.reserve(nums.size() * 2);
       for (int i = 0; i < (nums.size() * 2); i++)
       {
            
            ans.push_back(nums[i % nums.size()]);
       }

       return ans;
    }
};
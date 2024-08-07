class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int> result;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                sum = nums[i] + nums[j];
                if (sum == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }        
        return result;
    }
};
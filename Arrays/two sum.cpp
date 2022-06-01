class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        vector<int> sol;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
           mp.insert(pair<int, int>(nums[i], i + 1));
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[target - nums[i]] != 0 && i != mp[target - nums[i]] - 1)
            {
                sol.push_back(i);
                sol.push_back(mp[target - nums[i]] - 1);
                break;
            }
            
            
            
        }
        return sol;
    }
};

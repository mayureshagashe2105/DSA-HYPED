class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        string s = "";
        vector<int> dup;
        for (int i = 0; i < nums.size() + 1; ++i)
        {
            s += "0";
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (s[nums[i]] == '0') s[nums[i]] = '1';
            else
            {
                dup.push_back(nums[i]);
            }
        }
        return dup;

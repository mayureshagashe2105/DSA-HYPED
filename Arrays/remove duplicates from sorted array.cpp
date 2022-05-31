class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> unique;
        int ind = 0;
        for (int i = 0; i < nums.size(); i++) 
        {
            if (unique.find(nums[i]) == unique.end())
            {
                unique.insert(nums[i]);
                nums[ind] = nums[i];
                ++ind;
            }
        }
        return unique.size();
    }
};

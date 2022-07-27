class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int> hash(nums.size(), 0);
        
        for (int i = 0; i < nums.size() - 1; ++i)
            if(nums[i] > nums[i + 1])
                ++hash[i];
        ++hash[nums.size() - 1];
        
        for (int i = nums.size() - 1; i > 0; --i)
            if(nums[i] > nums[i - 1])
            {
                ++hash[i];
                if (hash[i] == 2) return i;
            }
        return 0;
    }
};

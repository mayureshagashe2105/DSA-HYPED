class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x: nums) ++freq[x];
        
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i < freq[0]) nums[i] = 0;
            else if (i < freq[0] + freq[1]) nums[i] = 1;
            else nums[i] = 2;
        }

    }
};

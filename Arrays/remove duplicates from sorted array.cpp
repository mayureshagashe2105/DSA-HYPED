class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ind = 1, ele = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == ele) continue;
            nums[ind] = nums[i];
            ele = nums[i];
            ++ind;
        }
        return ind;
    }
        
};

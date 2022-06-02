class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ind = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                int temp = nums[ind];
                nums[ind] = nums[i];
                nums[i] = temp;
                ++ind;
            }
            
        }
    }
};
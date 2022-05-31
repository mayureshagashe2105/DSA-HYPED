class Solution {
public:
    
    void swapa(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    void sortColors(vector<int>& nums) {
        bool flag;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            flag = true;
            for(int j = 0; j < nums.size() - i - 1; ++j)
            {
                if (nums[j] > nums[j + 1])
                {
                    swapa(nums[j], nums[j + 1]);
                    flag = false;
                }
            }
            if (flag) break;
        }
    }
};

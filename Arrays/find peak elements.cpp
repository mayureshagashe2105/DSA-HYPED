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


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        
        if (nums.size() == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[end] > nums[end - 1]) return end;
        
        
        while(end >= start)
        {
            int mid = (end + start) / 2;
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) return mid;
            else if (nums[mid] < nums[mid + 1]) start = mid + 1;
            else if (nums[mid] < nums[mid - 1]) end = mid - 1;
            // cout << mid << end << start << endl;

        }
        return -1;
    }
};

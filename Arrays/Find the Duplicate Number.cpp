class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> hash(nums.size() + 1); // create a hash function as f(x) = x in a vector
        for (int i = 0; i < nums.size(); i++)
        {
            if (hash[nums[i]] == 0) hash[nums[i]]++; // increment value of hash by 1 if found
            else return nums[i]; // if val is > 0 it is duplicate
        }
        return 0;
    }
};

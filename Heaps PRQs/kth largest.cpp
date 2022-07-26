class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> q(nums.begin(), nums.end());
        for (int i = 1; i < k; i++) q.pop();
        return q.top();
    }
};

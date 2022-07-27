class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int, vector<int>, greater<int>> pq(nums2.begin(), nums2.end());
        
        for (int i = 0; i < m; ++i)
            pq.push(nums1[i]);
        
        for (int i = 0; i < m + n; ++i)
        {
            nums1[i] = pq.top();
            pq.pop();
        }
    }
};

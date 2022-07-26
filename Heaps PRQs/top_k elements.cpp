class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        
        for (int i = 0; i < nums.size(); ++i)
            ++freq[nums[i]];
        
        priority_queue<pair<int, int>> top_k;
        for (unordered_map<int, int>::iterator itr = freq.begin(); itr != freq.end(); ++itr)
            top_k.push(pair<int, int>(itr->second, itr->first));
        
        vector<int> res;
        for(int i = 0; i < k; ++i)
        {
            res.push_back(top_k.top().second);
            top_k.pop();
        }
        return res;
    }
};

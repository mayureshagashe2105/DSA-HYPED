class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> r;
        unordered_map<string, vector<string>> mp;
        
        for (int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        
        for (auto itr = mp.begin(); itr != mp.end(); itr++)
            r.push_back(itr->second);
        return r;
    }
};

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int suma = 0, count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        for (int i : nums)
        {
            suma += i;
            int rem = suma % k;
            if (rem < 0) rem += k;
            if (mp.find(rem) != mp.end()) count += mp[rem];
            ++mp[rem];
        }
        
        return count;
    }
};

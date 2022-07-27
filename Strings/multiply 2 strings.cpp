class Solution {
public:    
    
    string multiply(string nums1, string nums2) {
        vector<int> res(nums1.length() + nums2.length(), 0);
        
        if (nums1 == "0" || nums2 == "0") return "0";
        
        for (int i = nums1.length() - 1; i >= 0; --i)
        {
            for (int j = nums2.length() - 1; j >= 0; --j)
            {
                res[i + j + 1] += (nums1[i] - '0') * (nums2[j] - '0');
                res[i + j] += res[i + j + 1] / 10;
                res[i + j + 1] %= 10; 
            }
        }
        
        string mul = "";
        int i = 0;
        while(res[i] == 0) ++i;
        while(i < res.size()) mul += (res[i++] + '0');
        return mul;
    }
};

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        queue<int>per, temp;
        vector<int> res;
        for (int i = 0; i < nums2.size(); ++i)
            per.push(nums2[i]);
        
        for (int i = 0; i < nums1.size(); ++i)
        {
            temp = per;
            while(temp.front() != nums1[i])
                temp.pop();
            
            while (!temp.empty())
            {
                if (temp.front() > nums1[i])
                {
                      res.push_back(temp.front());
                      break;
                }
                temp.pop();
            }
            if (res.size() != i + 1) res.push_back(-1);
        }
        return res;
    }
};

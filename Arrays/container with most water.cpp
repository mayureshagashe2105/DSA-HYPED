class Solution {
public:
    
    
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int max_area = 0;
        while (i < j)
        {
            if (height[i] > height[j])
            {
                max_area = max(height[j] * (j - i), max_area);
                --j;
            }
            else
            {
               max_area = max(height[i] * (j - i), max_area);
               ++i; 
            }
        }
        
        return max_area;       
    }
};

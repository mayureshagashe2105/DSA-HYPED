class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<int> nge;
        
        for (int i = temperatures.size() - 1; i >= 0; --i)
        {
            while (!nge.empty() && temperatures[nge.top()] <= temperatures[i]) nge.pop();
            
            if (!nge.empty()) res[i] = nge.top() - i;
            
            nge.push(i);
            
        }
        return res;
    }
};

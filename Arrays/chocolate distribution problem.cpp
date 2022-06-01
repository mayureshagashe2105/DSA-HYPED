class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    priority_queue<long long, vector<long long>, greater<long long>> q(a.begin(), a.end());
    int i = 0;
    while(!q.empty())
    {
        a[i] = q.top();
        q.pop();
        ++i;
    }
        int max_diff = INT_MAX;
        for (int i = 0; i <= n - m; ++i)
        {
            if (a[i + m - 1] - a[i] < max_diff) max_diff = a[i + m - 1] - a[i];
        }
        
        
        return max_diff;
    
    }   
};

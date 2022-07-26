class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long,vector<long long> ,greater<long long>> pq;
        pq.push(1);
        unordered_map<long long, long long> dup;
        vector<long long> v;
        v.push_back(1);
        int count = 1, popped = 0;
        if (n == 1) return 1;
        while(count < n * 2)
        {
            long long mul = pq.top();
            if (!dup[mul * 2])
            {
                dup[mul * 2] = 1;
                pq.push(mul * 2);
                v.push_back(mul * 2);
                ++count;
            }
            if (!dup[mul * 3])
            {
                dup[mul * 3] = 1;
                pq.push(mul * 3);
                v.push_back(mul * 3);
                ++count;

            }
            if (!dup[mul * 5])
            {
                dup[mul * 5] = 1;
                pq.push(mul * 5);
                v.push_back(mul * 5);
                ++count;

            }
            pq.pop();
            ++popped;
        }
        priority_queue<long long,vector<long long> ,greater<long long>> cpq(v.begin(), v.end());
        for (int i = 0; i < n - 1; ++i)
            cpq.pop();
        return cpq.top();
    }
};

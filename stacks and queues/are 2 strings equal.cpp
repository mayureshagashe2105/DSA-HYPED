class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss, ts;
        
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '#')
            {
                if (!ss.empty())
                {
                    ss.pop();
                }
            }
            else ss.push(s[i]);
        }
        
        for (int i = 0; i < t.length(); ++i)
        {
            if (t[i] == '#')
            {
                if (!ts.empty())
                {
                    ts.pop();
                }
            }
            else ts.push(t[i]);
        }
        
        if (ss.size() == ts.size())
        {
            while(!ss.empty())
            {
                if(ss.top() == ts.top())
                {
                    ss.pop();
                    ts.pop();
                }
                else return false;
            }
        }
        else return false;
        return true;
        
    }
};

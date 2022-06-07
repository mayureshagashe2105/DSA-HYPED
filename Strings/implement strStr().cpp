class Solution {
public:
    
    int get_hash(string s, int n)
    {
        int hash = 0;
        for (int i = 0; i < n; ++i)
            hash += s[i];
        
        return hash;
    }
    
    
    int strStr(string haystack, string needle) {
        
        int ned_len = needle.length();
        int hay_len = haystack.length();
        int needle_hash = get_hash(needle, ned_len);
        int haystack_hash = get_hash(haystack, ned_len);
        bool flag;
        
        if (ned_len == 0) return 0;
        if (ned_len > hay_len) return -1;
        
        for (int i = 0; i < hay_len; ++i)
        {
            if (needle_hash == haystack_hash)
            {
                flag = true;
                for (int j = 0; j < ned_len; ++j)
                {
                    if (needle[j] == haystack[i + j]) continue;
                    else
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag) return i;
            }
            haystack_hash -= haystack[i];
            if (i < hay_len - ned_len)
                haystack_hash += haystack[i + ned_len];
        }
        return -1;
    }
};

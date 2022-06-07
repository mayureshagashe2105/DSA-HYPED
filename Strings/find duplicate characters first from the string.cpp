class Solution
{
  public:
    char firstRep (string s)
    {
        vector<int> hash(27, 0);
        
        for (int i = 0; i < s.length(); ++i)
            ++hash[s[i] - 'a'];
        
        
        for (int i = 0; i < s.length(); ++i)
            if(hash[s[i] - 'a'] > 1) return s[i];
        
        return '#';
            
    }
};

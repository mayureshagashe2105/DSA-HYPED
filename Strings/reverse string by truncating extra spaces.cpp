class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string word = "";
        s += " ";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                if (word.length() != 0)
                {
                    words.push(word);
                    word = "";
                }
            }
            else
            {
                word += s[i];
            }
        }
        string rev = "";
        while(!words.empty())
        {
            rev += words.top();
            words.pop();
            if (words.size() == 0) continue;
            rev += " ";
        }
        return rev;
    }
};

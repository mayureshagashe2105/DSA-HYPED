class Solution {
public:
    bool isValid(string s) {
        stack<char> validate;
        bool flag = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (flag)
            {    
                if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                    validate.push(s[i]);
                else
                {
                    switch(s[i])
                    {
                        case ')':
                            if (validate.size() != 0 && validate.top() == '(') validate.pop();
                            else flag = 0;
                            break;

                        case ']':
                            if (validate.size() != 0 && validate.top() == '[') validate.pop();
                            else flag = 0;
                            break;

                        case '}':
                            if (validate.size() != 0 && validate.top() == '{') validate.pop();
                            else flag = 0;
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                break;
            }
        }
        if (flag)
        {
            if (validate.size() == 0) return flag;
            else return !flag;
        }
        return flag;
    }
};

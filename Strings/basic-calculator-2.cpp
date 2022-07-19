class Solution {
public:
    
    int parse_string(char op, int iv1, int iv2)
    {
        if (op == '+') return iv1 + iv2;
        else if (op == '-') return iv1 - iv2;
        else if (op == '*') return iv1 * iv2;
        else return iv1 / iv2;
    }
    
    int s2i(string s)
    {
        int temp = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            int digit = int(s[i]) - int('0');
            temp = temp * 10 + digit;
        }
        return temp;
    }
    
    int calculate(string s) {
        stack<char> op;
        stack<int> operands;
        unordered_map<char, int> prec;
        
        prec['*'] = 0;
        prec['/'] = 0;
        prec['+'] = 1;
        prec['-'] = 1;
        
        string temp_opr = "";
        int i = 0;
        while(i < s.length())
        {   
            if (s[i] == ' ');
            else if (s[i] >= '0' and s[i] <= '9') {temp_opr += s[i];}
            else
            {
                operands.push(s2i(temp_opr));
                temp_opr = "";
                
                if (!op.empty())
                {
                    if (prec[op.top()] > prec[s[i]]) op.push(s[i]);
                    else
                    {
                        while (!op.empty() && prec[op.top()] <= prec[s[i]])
                        {
                            int v2 = operands.top();
                            operands.pop();
                            int v1 = operands.top();
                            operands.pop();
                            int temp = parse_string(op.top(), v1, v2);
                            cout << temp;
                            operands.push(temp);
                            op.pop();
                        }
                        op.push(s[i]);
                    }
                }
                else op.push(s[i]);
            }
            ++i;
        }
        operands.push(s2i(temp_opr));
        int suma = operands.top();
        while (!op.empty())
        {
            int v = operands.top();
            operands.pop();
            suma = (parse_string(op.top(), operands.top(), v));
            operands.pop();
            operands.push(suma);
            op.pop();
        }
        return suma;
        
        
    }
};

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> s1;
        s1.push(s[0]);
        
        string res = "";
        
        int i = 1;
        while(i<s.length())
        {
            if(s1.empty())
            {
                s1.push(s[i]);
                i++;
                continue;
            }
            
            if(s[i] == s1.top())
            {
                s1.push(s[i]);
                res += s[i];
            }
            else
            {
                s1.pop();
                if(!s1.empty())
                {
                    res += s[i];
                }
            }
            i++;
        }
        return res;
    }
};

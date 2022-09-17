class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int flag = 0;
        
        if(s.length() != t.length()) return false;
        
        unordered_map<char, char> ms;
        unordered_map<char, char> mt;
        
        for(int i=0; i<s.length(); i++)
        {
            if(ms.find(s[i]) == ms.end())
            {
                if(mt.find(t[i]) == mt.end())
                {
                    ms[s[i]] = t[i];
                    mt[t[i]] = s[i];
                }
            }
            
            if(ms[s[i]] != t[i] || mt[t[i]] != s[i]) return false;
        }
        
        return true;
    }
};

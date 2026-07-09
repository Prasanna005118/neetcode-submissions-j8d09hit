class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;

        int i = 0;
        int max_len = 0;

        for(int j=0; j<s.size(); j++)
        {
            while(us.count(s[j]))
            {
                us.erase(s[i]);
                i++;
            }

            us.insert(s[j]);
            max_len = max(max_len, j - i + 1);
        }
        return max_len;
    }
};

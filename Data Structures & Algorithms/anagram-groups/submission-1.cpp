class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(string str: strs)
        {
            string temp = str;

            sort(str.begin(),str.end());
            mp[str].push_back(temp);
        }

        vector<vector<string>> output;
        for(auto &it : mp)
        {
            output.push_back(it.second);
        }

        return output;
    }
};

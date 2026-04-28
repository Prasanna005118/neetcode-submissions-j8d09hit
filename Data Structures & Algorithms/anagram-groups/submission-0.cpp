class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> op;
        unordered_map<string, vector<string>> groups;
        for(std::string str: strs)
        {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            groups[sortedStr].push_back(str);
        }
        for(auto const& [key, val] : groups) {
            op.push_back(val);
        }
        return op;
    }

};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        std::vector<int>op;
        for(int num : nums)
        {            
            freq[num]++;
        }
        std::vector<std::pair<int, int>> freq_vec(freq.begin(), freq.end());
        std::sort(freq_vec.begin(), freq_vec.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        int i = 0;
        for(auto const& [key, val] : freq_vec)
        {            
            if(i == k)
                break;
            op.push_back(key);
            i++;
        }
        return op;
    }
};
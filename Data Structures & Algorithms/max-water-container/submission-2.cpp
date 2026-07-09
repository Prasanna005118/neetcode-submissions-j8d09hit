class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size() - 1;
        int ans = 0;

        int left = 0;
        int right = n;

        while(left < right)
        {
            int curr = min(heights[left], heights[right]) * (right - left);
            ans = max(ans, curr);
            if(heights[left] < heights[right])
            {
                left++;
            }
            else
                right--;
        }
        return ans;
    }
};

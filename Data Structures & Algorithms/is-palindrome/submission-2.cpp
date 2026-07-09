class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for (char c : s) {
            if (isalnum(c))
                temp += tolower(c);
        }

        string t2 = temp;
        reverse(t2.begin(), t2.end());

        return temp == t2;
    }
    
};

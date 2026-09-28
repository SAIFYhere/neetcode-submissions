class Solution {
   public:
    bool isPalindrome(string s) {
        string c = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
                c += tolower(s[i]);
            }
        }
        int size = c.size();
        for (int i = 0; i < size; i++) {
            if (c[i] != c[size - 1 - i]) return false;
        }

        return true;
    }
};

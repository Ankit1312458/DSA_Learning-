class Solution {
public:
    int strStr(string haystack, string needle) {
        int r = needle.length();
        int n = haystack.length();

        for (int i = 0; i <= n - r; i++) {
            bool match = true;

            for (int j = 0; j < r; j++) {
                if (haystack[i + j] != needle[j]) {
                    match = false;
                    break;
                }
            }

            if (match)
                return i;
        }

        return -1;
    }
};
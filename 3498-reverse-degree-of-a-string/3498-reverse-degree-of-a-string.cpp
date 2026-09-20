class Solution {
public:
    int reverseDegree(string s) {
        int n = s.length();
        int index = 0;
        int sum = 0;
        for(int i = 0 ; i<n ;i++){
            index++;
            int r = 26 - (s[i] - 'a');
            int p = index * r;
            sum += p;
        }
        return sum;
    }
};
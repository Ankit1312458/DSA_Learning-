class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26,0);
        int n = word.size();
        int t = 0;
        for(int i = 0; i<n; i++){
            t = word[i] - 'a';
            freq[t] += 1;
        }
        sort(freq.begin(),freq.end(), greater<int>());
        int res =  0;
        for(int i = 0 ;i<26 && freq[i] > 0; i++){
            res += freq[i] * ((i/8) + 1);
        }
        return res;
    }
};
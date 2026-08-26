class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }
        int i = 1;
        while (i <= n) {
            if (s.count(i * k)) {
                i++;
            } else {
                return i * k;
            }
        }
        int p = (i * k ) ; 
        return p;
    }
};
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        // int stable = -1;
        for(int i = 0 ; i<n ;i++){
            int ms = -1;
            for(int j = 0 ;j<= i;j++){
                ms = max(ms,nums[j]);
            }
            int mas = INT_MAX;
            for(int j = i; j<n; j++){
                mas = min(mas, nums[j]);
            }
            int p = ms - mas;
            if(p <= k){
                // stable = i;
                return i;
            }
        }
        return -1;
    }
};
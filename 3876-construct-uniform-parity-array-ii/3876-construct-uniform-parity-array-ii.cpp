class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mo = INT_MAX;

        
        for (int x : nums1) {
            if (x % 2 == 1) {
                mo = min(mo, x);
            }
        }

        
        for (int x : nums1) {
            if (x % 2 == 0 && mo != INT_MAX && x < mo) {
                return false;
            }
        }

        return true;
    }
};

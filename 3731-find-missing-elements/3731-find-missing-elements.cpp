class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> miss;
        int n = nums.size();
        for(int i = 0;i < n-1; i++){
            if((nums[i+1] - nums[i])>1){
                int mIdx = nums[i+1] - nums[i];
                int res = nums[i] + 1;
                for(int j = 0; j<mIdx-1; j++){
                    miss.push_back(res);
                    res += 1;
                }
            }

        }
        return miss;
    }
};
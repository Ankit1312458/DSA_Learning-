class Solution {
public:
    bool isValid(vector<int> nums,int mid, int k){
        // int allowedPages = mid;
        int pages = 0;
        int stu = 1;
        for(int i = 0 ; i< nums.size(); i++){
            if(nums[i] + pages <= mid){
                pages += nums[i];
            }
            else{
                stu++;
                pages = nums[i];
            }
        }
        if(stu <= k){
            return true;
        }
        else{
            return false;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int  sum = 0;
        int mx = 0;
        int ans;
        for(int i = 0 ;i<n ;i++){
            sum += nums[i];
            mx = max(mx,nums[i]);
        }
        int st = mx;
        int end = sum;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(isValid(nums, mid, k)){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }
};
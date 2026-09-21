class Solution {
public:
    bool isPossible(vector<int>& weights, int days, int mid){
        int t = 0;
        int stu = 1;
        for(int i = 0 ;i< weights.size() ;i++){
            if(weights[i] + t <= mid){
                t += weights[i];
            }
            else{
                stu++;
                t = weights[i];
            }
        }
        if(stu > days){
            return false;
        }
        else{
            return true;
        }
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int mx = 0;
        for(int i = 0 ; i<n ;i++){
            sum += weights[i];
            mx = max(mx,weights[i]);
        }
        int st = mx;
        int end = sum;
        int ans;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(isPossible(weights, days , mid)){
                end = mid - 1;
                ans = mid;
            }
            else{
                st = mid + 1;
            }
        }
        return ans;
    }
};
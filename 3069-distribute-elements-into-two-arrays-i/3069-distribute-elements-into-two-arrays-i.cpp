class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        
        vector<int> arr2;
        int n = nums.size();
       
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i = 2; i<n ;i++){
            int l = arr1.size();
            
            int r = arr2.size();
            if(arr1[l-1] > arr2[r-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
                    
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};
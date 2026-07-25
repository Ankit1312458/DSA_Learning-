class Solution {
public:
    int maxProduct(int n) {
        vector<int> s;
        int temp = n;
        int ms = 0;
        while(temp > 0){
            int i = temp % 10;
            // s.push_front(i);
            s.insert(s.begin(), i);
            temp /= 10;
        }
        sort(s.begin(),s.end());
        int t = s.size();
        ms = s[t -1] * s[t-2];
        return ms;
}
};
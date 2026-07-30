class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        if(n <= 8){
            return n;
        }
        else{
            int a = n / 8;
            int r = n % 8;
            if(a == 1){
                return (8 + 2*r);
            }
            if(a == 2){
                return(24 + 3 *r);
            }
            if(a ==3){
                return(48 + 4 * r);
            }
        }
        return 0;
    }
};
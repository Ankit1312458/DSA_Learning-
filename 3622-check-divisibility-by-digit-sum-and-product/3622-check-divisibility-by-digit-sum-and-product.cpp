class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int sn = n;
        int p = 1;
        while(sn > 0){
            sum += sn%10;
            p *= sn%10;
            sn /= 10;
        }
        int ns = sum + p;
        if(n % ns == 0){
            return true;
        }
        else{
        return false;}
    }
};
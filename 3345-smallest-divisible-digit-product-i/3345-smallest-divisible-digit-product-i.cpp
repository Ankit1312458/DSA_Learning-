class Solution {
public:
    int product(int n){
        int temp = n;
        int p = 1;
        while(temp>0){
            p *= temp % 10 ;
            temp /= 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int p = product(n);
        while(p % t != 0){
            n++;
            p = product(n);
        }
        return n;
    }
};
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while (n!=0){
            int n1=n%10;
            n/=10;
            p*=n1;
            s+=n1;
        }
        p-=s;
        return p;
    }
    
};
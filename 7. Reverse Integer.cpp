//https://leetcode.com/problems/reverse-integer/

class Solution {
public:
    int reverse(int x) {
        int x1,y,y1;
        y=0;
        while (x!=0){
            x1=x%10;
            x=x/10;
            if (y > INT_MAX/10 || (y == INT_MAX / 10 && x1 > 7)) return 0;
            if (y < INT_MIN/10 || (y == INT_MIN / 10 && x1 < -8)) return 0;
            y1=y*10+x1;
            y=y1;
        }
        return y;
    }
};
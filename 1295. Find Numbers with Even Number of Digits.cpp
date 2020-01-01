//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int p=0;
        int p1;
        for (auto i:nums){
            p1=0;
            while (i!=0){
                i/=10;
                p1++;
            }
            if (p1%2==0)
                p++;
        }
       return p;
    }
};
//https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string S) {
        string neu;
        int r=0;
        int l=0;
        bool fl;
        for (auto i:S){
            fl=true;
            if (i=='('){
                if (l==0){
                    fl=false;
                }
                l++;
            }
            if(i==')'){
                r++;
                if (r==l){
                    l=0;
                    r=0;
                    fl=false;
                }
            }
            if (fl){
                neu.push_back(i);
            }
        }
        return neu;
    }
};
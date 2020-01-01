//https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        int ud=0;
        int lr=0;
        bool fl=true;
        for (auto i:moves){
            if (i=='U'){
                ud++;
            }
            else if (i=='D'){
                ud--;
            }
            else if (i=='L'){
                lr++;
            }
            else{
                lr--;
            }
        }
        if (ud!=0 || lr!=0){
            fl=false;
        }
        return fl;
    }
};
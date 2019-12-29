//https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int cont=0;
        char r='R';
        int ri=0;
        char l='L';
        int li=0;
        for (auto i: s){
            if (i==r){
                ri++;
            }
            if (i==l){
                li++;
            }
            if(ri==li){
                cont++;
                ri=0;
                li=0;
            }
        }
        return cont;
    }
};
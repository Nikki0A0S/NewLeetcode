//https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string str) {
        string neu;
        for (auto i:str){
            if ('A' <= i && i <= 'Z')
                i -= 'A' - 'a';
            neu.push_back(i);
        }
        return neu;
    }
};
//https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/

class Solution {
public:
    string reverseWords(string s) {
        string neu="";
        string buf="";
        for (int i=0; i<s.length(); ++i){
            if (s[i]!=' '){
                buf=s[i]+buf;
                if (i==s.length()-1){
                    neu+=buf;
                }
            }
            else{
                neu+=buf;
                neu+=" ";
                buf="";
            }
        }
        return neu;
    }
};
//https://leetcode.com/problems/di-string-match/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> neu (S.length()+1);
        int conti=0;
        int contd=S.length();
        for(int i=0; i<S.length(); ++i){
            if(i!=S.length()-1){
                if (S[i]=='I'){
                    neu[i]=conti;
                    conti++;
                }
                else{
                    neu[i]=contd;
                    contd--;
                }
            }
            else{
                if (S[i]=='I'){
                    neu[i]=conti;
                    conti++;
                    neu[i+1]=conti;
                }
                else{
                    neu[i]=contd;
                    contd--;
                    neu[i+1]=contd;
                }
            }
        }
        return neu;
    }
};
/https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string S) {
        int contf=0;
        int cont=0;
        for (auto i:S){
            if(i=='('){
                contf++;
            }
            else{
                contf--;
            }
            if(contf==-1){
                contf++;
                cont++;
            }
        }
        cont+=contf;
        return cont;
    }
};
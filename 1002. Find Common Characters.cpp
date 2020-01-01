//https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> neu;
        int cont;
        for (auto i: A[0]){
            bool fl=true;
            int j=1;
            while(j< A.size() && fl){
                if (find(A[j].begin(), A[j].end(), i)==A[j].end()){
                    fl=false;
                }
                else{
                    cont=A[j].find(i);
                    A[j].erase(cont,1);
                }
                j++;
            }
            if (fl){
                string k="";
                k+=i;
                neu.push_back(k);
            }
        }
        return neu;
    }
};
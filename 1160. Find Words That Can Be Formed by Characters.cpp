//https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0;
        for (auto i:words){
            int cont=0;
            bool fl=true;
            int j=0;
            while(j<i.size() && fl){
                if (chars.find(i[j])!=-1 && count(i.begin(),i.end(),i[j])<=count(chars.begin(), chars.end(),i[j])){
                    cont++;
                }
                else{
                    fl=false;
                    cont=0;
                }
                j++;
            }
            if(fl){
                sum+=cont;
            }
        }
        return sum;
    }
};
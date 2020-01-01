//https://leetcode.com/problems/unique-email-addresses/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> neu;
        for (auto i:emails){
            int j = 0;
            while(i[j] != '@'){
                if(i[j] == '+'){
                    int cont = j;
                    while(i[j++] != '@');
                    i.erase(cont,j-cont-1);
                    break;
                }if(i[j] == '.'){
                    i.erase(j, 1);
                }
                j++;
            }
            neu.insert(i);
        }
        return neu.size();
    }
};
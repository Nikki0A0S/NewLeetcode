//https://leetcode.com/problems/defanging-an-ip-address/

class Solution {
public:
    string defangIPaddr(string address) {
        string neu;
        neu.clear();
        for (auto i:address){
            if (i!='.'){
                neu.push_back(i);
            }
            else{
                neu.push_back('[');
                neu.push_back(i);
                neu.push_back(']');
            }
        }
        return neu;
    }
};
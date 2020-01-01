//https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set <int> str;
        bool fl=false;
        for (auto i: arr){
            m[i]++;
        }
        for (auto i:m){
            str.insert(i.second);
        }
        if (str.size()==m.size()){
            fl=true;
        }
        return fl;
    }
};
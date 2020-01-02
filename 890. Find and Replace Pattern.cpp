//https://leetcode.com/problems/find-and-replace-pattern/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
    map<char, char> buf1;
    map<char, char> buf2;
    string bufs;
    vector <string> neu;
    for (auto i : words) {
        bool fl = true;
        bufs = i;
        for (int j = 0; j < i.size(); ++j) {
            char k = pattern[j];
            char l = i[j];
            if (buf1.find(k) == buf1.end()){
                buf1[k] = l;
            }
            if ( buf2.find(l) == buf2.end()) {
                buf2[l] = k;
            }
            if (buf1[k] != l || buf2[l]!=k ) {
                bufs = "";
                fl = false;
            }
        }
        buf1.clear();
        buf2.clear();
        if (fl) {
            neu.push_back(bufs);
        }
    }
    return neu;
}
};
//https://leetcode.com/problems/partition-labels/

class Solution {
public:
    vector<int> partitionLabels(string S) {
    set<char> nom;
    int cont;
    vector<int> neu;
    string neus = "";
    for (int i = S.length() - 1; i >= 0; --i) {
        char k = S[i];
        nom.insert(S[i]);
        neus += S[i];
        S.erase(i, 1);
        if (count(S.begin(), S.end(), k) == 0) {
            bool fl = true;
            for (auto j : nom) {
                if (count(S.begin(), S.end(), j) != 0) {
                    fl = false;
                }
            }
            if (fl) {
                cont = neus.size();
                neu.push_back(cont);
                neus = "";
                nom.clear();
            }
        }
    }
    reverse(neu.begin(), neu.end());
    return neu;
}
};
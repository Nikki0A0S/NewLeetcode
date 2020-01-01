//https://leetcode.com/problems/subdomain-visit-count/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector <string> neu;
        map <string,int> neum;
        int cont;
        for (auto i:cpdomains){
            int cont1=0;
            cont=0;
            string pipec="";
            while(i[cont1]!=' ' && cont1<i.size()){
                pipec=i[cont1];
                cont=cont*10 + stoi(pipec);
                cont1++;
            }
            string buf="";
            for (int j=i.size()-1; j>cont1; j--){
                if (i[j]=='.'){
                    neum[buf]+=cont;
                }
                buf=i[j]+buf;
            }
            neum[buf]+=cont;
        }
        for (const auto& [first, second]: neum) {
            neu.push_back(to_string(second) + " " + first);
        }
        return neu;
    }
};
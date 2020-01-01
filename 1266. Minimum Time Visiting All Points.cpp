//https://leetcode.com/problems/minimum-time-visiting-all-points/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c, cont, k, l;
        cont=0;
        c=0;
        for (auto i: points){
            if (c!=0){
                cont+= max(abs(i[0]-k),abs(i[1]-l));
            }
            k=i[0];
            l=i[1];
            c++;
        }
        return cont;
    }
};
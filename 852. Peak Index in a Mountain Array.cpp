//https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int cont;
        int maxxx=*max_element(A.begin(),A.end());
        for (int i=0; i< A.size(); ++i){
            if (A[i]==maxxx){
                cont=i;
            }
        }
        return cont;
    }
};
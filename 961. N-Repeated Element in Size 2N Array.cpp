//https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int cont;
        int i=0;
        int j;
        bool fl=true;
        while (fl && i<A.size()){
            j=i+1;
            while (fl && j<A.size()){
                if (A[i]==A[j]){
                    fl=false;
                    cont=A[i];
                }
                j++;
            }
            i++;
        }
        return cont;
    }
};
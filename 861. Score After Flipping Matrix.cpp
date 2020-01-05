//https://leetcode.com/problems/score-after-flipping-matrix/

class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        for(int i=0; i<A.size(); ++i){
            if (A[i][0]==0){
                for(int j=0; j<A[0].size(); ++j){
                    A[i][j]=abs(A[i][j]-1);
                }
            }
        }
        for (int j=0; j<A[0].size(); ++j){
            int cont=0;
            for(int i=0; i<A.size(); ++i){
                if(A[i][j]==1){
                    cont++;
                }
            }
            int k=A.size()/2;
            if(A.size()%2!=0){
                k++;
            }
            if (cont<k){
                for(int i=0; i<A.size(); ++i){
                    A[i][j]=abs(A[i][j]-1);
                }
            }
        }
        int sum=0;
        for(int i=0; i<A.size(); ++i){
            int cont=0;
            for(int j=0; j<A[0].size(); ++j){
                cont=cont*2+A[i][j];
            }
            sum+=cont;
        }
        return sum;
    }
};
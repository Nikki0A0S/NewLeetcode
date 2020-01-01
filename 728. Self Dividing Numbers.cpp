//https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> neu(right-left+1);
        int cont=0;
        bool fl;
        for (int i=left; i<=right; ++i){
            fl=true;
            int j=i;
            while (fl && j!=0){
                int k=j%10;
                if(k==0){
                    fl=false;
                }
                else{
                j/=10;
                if (i%k!=0){
                    fl=false;
                }
            }
            }    
            if (fl){
                neu[cont]=i;
                cont++;
            }
        }
        int i=right-left;
        while (i!=cont-1){
            neu.pop_back();
            i--;
        }
        return neu;
    }
};
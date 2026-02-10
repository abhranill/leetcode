class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int v=0;
        for(int i=0;i<stones.length();i++){
         for(int j=0;j<jewels.length();j++){
            if(stones[i]==jewels[j]){
                v+=1;
            }
         }
        }
        return v;
    }
};
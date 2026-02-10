class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int v=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
             v+=nums[i];
            }
            else{
                v-=nums[i];
            }
        }
        return v;
    }
};
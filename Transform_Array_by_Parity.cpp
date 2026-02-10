class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
       int x=0,y=0;
       vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                x++;
            }
            else{
              y++;  
            }
        }
       for(int i=0;i<x;i++){
        v.push_back(0);
       }
       for(int i=0;i<y;i++){
        v.push_back(1);
       }
       return v;
    }
};
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
          vector<int> freq(101,0);
// nums[i] values range from 0 to 100
// we use the value itself as an index
// so freq size must be at least 101 to avoid out-of-bounds
       int n=0;
       for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
       } 
       for(int i=0;i<freq.size();i++){
        if(freq[i]!=0){
          n+= (freq[i]*(freq[i]-1)/2);
        }
       }
       return n;
    }
};
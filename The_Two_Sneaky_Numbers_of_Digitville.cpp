class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
       vector<int> freq(nums.size(),0);
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
        // nums[i] = the number
// use that number as an index in freq
// increment count → how many times this number appears
       }
       for(int i=0;i<freq.size();i++){
       if(freq[i]==2){
        ans.push_back(i);
       }
       }
       return ans;
    }
};
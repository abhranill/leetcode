/*nums.end() → where to insert (at the end)
nums.begin() → start copying from
nums.end() → stop copying*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     nums.insert(nums.end(),nums.begin(),nums.end());
     return nums;
    }
};
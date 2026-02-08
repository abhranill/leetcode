class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int> st;
       for(int i=0;i<friends.size();i++){
        st.insert(friends[i]);
       } 
       vector<int> ans;
       for(int i=0;i<order.size();i++){
        if(st.count(order[i])){
            //.count fint the element in the main set
            ans.push_back(order[i]);
        }

       }
       return ans;
    }
};
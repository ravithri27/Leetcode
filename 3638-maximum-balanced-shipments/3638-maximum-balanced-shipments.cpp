class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int n=weight.size();
        stack<int> st;
        int ans=0;
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top()<weight[i]){
                st.pop();
            }
            if(!st.empty()&&st.top()>weight[i]){
                ans++;
                while(!st.empty()){
                    st.pop();
                }
                continue;
            }
            st.push(weight[i]);
        }
        return ans;
    }
};
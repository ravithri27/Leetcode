class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(auto x: s){
            if(!st.empty()&&x=='*'){
                st.pop();
            }else{
                st.push(x);
            }
        }
        string ans(st.size(),' ');
        int i=st.size()-1;
        while(!st.empty()){
            ans[i]=st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
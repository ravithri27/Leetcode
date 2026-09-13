class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto x:asteroids){
            while(!st.empty()&&(st.top()<-x)&&(st.top()>0&&x<0)){
                st.pop();
            }
            if(!st.empty()&&x<0&&st.top()>0){
                if(st.top()==-x){
                    st.pop();
                }
            }else{
                st.push(x);
            }
        }
        vector<int> ans(st.size());
        int i=st.size()-1;
        while(!st.empty()&&i>=0){
            ans[i]=st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
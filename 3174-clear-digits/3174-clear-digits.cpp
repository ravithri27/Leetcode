class Solution {
public:
    string clearDigits(string s) {
        stack<int> st;
        for(auto x:s){
            if(!st.empty()&&isdigit(x)){
                st.pop();
            }else{
                st.push(x);
            }
        }
        string ans(st.size(),' ');
        int i=st.size()-1;
        while(i>=0&&!st.empty()){
            ans[i]=st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
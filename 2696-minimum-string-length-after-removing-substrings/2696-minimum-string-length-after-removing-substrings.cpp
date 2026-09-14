class Solution {
public:
    int minLength(string s) {
        stack<int> st;
        for(auto x:s){
            if(!st.empty()&&x=='B'&&st.top()=='A'){
                st.pop();
            }else if(!st.empty()&&x=='D'&&st.top()=='C'){
                st.pop();
            }else{
                st.push(x);
            }
        }
        return st.size();
    }
};
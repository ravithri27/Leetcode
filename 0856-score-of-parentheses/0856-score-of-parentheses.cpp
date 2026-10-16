class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        stack<int> st;
        st.push(0);
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(0);
            }else{
                int v=st.top();
                st.pop();
                int score=0;
                if(2*v>1){
                    score=2*v;
                }else{
                    score=1;
                }
                st.top()+=score;
            }
        }
        return st.top();
    }
};
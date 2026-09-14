class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        bool ans=true;
        for(auto x:s){
            if(x==')'&&!st.empty()){
                if(st.top()!='('){
                    ans=false;
                    break;
                }else{
                    st.pop();
                }
            }else if(x=='}'&&!st.empty()){
                if(st.top()!='{'){
                    ans=false;
                    break;
                }else{
                    st.pop();
                }
            }else if(x==']'&&!st.empty()){
                if(st.top()!='['){
                    ans=false;
                    break;
                }else{
                    st.pop();
                }
            }else{
                st.push(x);
            }
        }
        if(!st.empty()){
            return false;
        }
        return ans;
    }
};
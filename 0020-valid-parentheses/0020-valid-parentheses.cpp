class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto x:s){
            if(x=='('||x=='{'||x=='['){
                st.push(x);
            }else{
                if(st.empty()){
                    return false;
                }
                char top=st.top();
                st.pop();
                if(x==')'&&top!='('||x=='}'&&top!='{'||x==']'&&top!='['){
                    return false;
                }
            }
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};
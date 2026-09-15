class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int i=0;
        string ans="";
        while(i<s.size()){
            if(!st.empty()&&s[i]==')'&&st.size()!=1){
                st.pop();
                ans+=s[i];
            }else if(st.size()==1&&s[i]==')'){
                st.pop();
            }else if(st.size()>=1){
                st.push(s[i]);
                ans+=s[i];
            }else{
                st.push(s[i]);
            }
            i++;
        }
        return ans;
    }
};
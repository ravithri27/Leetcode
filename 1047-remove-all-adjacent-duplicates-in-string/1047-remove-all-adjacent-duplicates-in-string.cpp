class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()&&st.top()==s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string ans(st.size(), ' ');
        int i=st.size()-1;
        while(i>=0&&!st.empty()){
            ans[i]=st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
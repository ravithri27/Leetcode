class Solution {
public:
    string decodeString(string s) {
        int n=s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]==']'){
                string str="";
                while(!st.empty()&&st.top()!='['){
                    str+=st.top();
                    st.pop();
                }
                reverse(str.begin(),str.end());
                st.pop();
                int num = 0;
                int place = 1;
                while (!st.empty() && isdigit(st.top())) {
                    num += (st.top() - '0') * place;
                    place *= 10;
                    st.pop();
                }
                string ans="";
                for(int j=0;j<num;j++){
                    ans+=str;
                }
                for(int j=0;j<ans.size();j++){
                    st.push(ans[j]);
                }
            }else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
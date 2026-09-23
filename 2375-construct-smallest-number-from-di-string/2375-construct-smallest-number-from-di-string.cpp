class Solution {
public:
    string smallestNumber(string pattern) {
        stack<int> st;
        string ans="";
        int i=1;
        for(char x:pattern){
            st.push(i);
            if(x=='I'){
                while(!st.empty()){
                    ans+=st.top()+'0';
                    st.pop();
                }
            }
            i++;
        }
        st.push(i);
        while(!st.empty()){
            ans+=st.top()+'0';
            st.pop();
        }
        return ans;
    }
};
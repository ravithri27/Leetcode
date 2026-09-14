class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(auto x:s){
            if(!st.empty()&&x==toupper(x)){
                if(st.top()==tolower(x))
                    st.pop();
                else
                    st.push(x);
            }else if(!st.empty()&&x==tolower(x)){
                if(st.top()==toupper(x))
                    st.pop();
                else
                    st.push(x);
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
class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int max=0;
        for(auto x:s){
            if(x=='('){
                st.push(x);
            }else if(x==')'){
                if(max<st.size()){
                    max=st.size();
                }
                st.pop();
            }
        }
        return max;
    }
};
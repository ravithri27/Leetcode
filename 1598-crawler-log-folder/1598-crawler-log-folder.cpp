class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(auto x:logs){
            if(x=="../"&&!st.empty()){
                st.pop();
            }else if(x=="./"){
                continue;
            }else if(x!="../"&&x!="./"){
                st.push(x);
            }
        }
        return st.size();
    }
};
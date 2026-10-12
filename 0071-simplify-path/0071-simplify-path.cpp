class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int n=path.size();
        int i=0;
        while(i<n){
            string dir="";
            while(i<n&&path[i]=='/'){
                i++;
            }
            while(i<n&&path[i]!='/'){
                dir+=path[i];
                i++;
            }
            if(dir==" "||dir=="."){
                continue;
            }else if(dir==".."){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                st.push(dir);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = "/"+ st.top() + ans;
            st.pop();
        }
        if(!ans.empty()&&ans.back()=='/'){
            ans.pop_back();
        }
        return ans.empty() ? "/" : ans;
    }
};
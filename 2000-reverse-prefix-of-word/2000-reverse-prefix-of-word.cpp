class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<int> st;
        int count=0;
        for(auto x:word){
            if(x==ch){
                st.push(x);
                count=1;
                break;
            }
            st.push(x);
        }
        string ans;
        if(count==1){
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            int i=ans.size();
            while(i<word.size()){
                ans+=word[i];
                i++;
            }
        }else{
            return word;
        }
        return ans;
    }
};
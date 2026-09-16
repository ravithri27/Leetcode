class Solution {
public:
    string robotWithString(string s) {
        stack<char> st;
        string p="";
        vector<char> minsuffix(s.size());
        minsuffix[s.size()-1]=s[s.size()-1];
        for(int i=s.size()-2;i>=0;i--){
            if(minsuffix[i+1]<s[i]){
                minsuffix[i]=minsuffix[i+1];
            }else{
                minsuffix[i]=s[i];
            }
        }
        for(int i=0;i<s.size();i++){
            while(!st.empty()&&st.top()<=minsuffix[i]){
                p+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        while(!st.empty()){
            p+=st.top();
            st.pop();
        }
        return p;
    }
};
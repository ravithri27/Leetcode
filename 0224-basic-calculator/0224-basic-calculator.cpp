class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        stack<int> st;
        long long num=0;
        int res=0;
        int sign=1;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }else if(s[i]=='+'){
                res+=sign*num;
                num=0;
                sign=1;
            }else if(s[i]=='-'){
                res+=sign*num;
                num=0;
                sign=-1;
            }else if(s[i]=='('){
                st.push(res);
                st.push(sign);
                res=0;
                sign=1;
            }else{
                res+=sign*num;
                num=0;
                res*=st.top();
                st.pop();
                res+=st.top();
                st.pop();
            }
        }
        return res+sign*num;
    }
};
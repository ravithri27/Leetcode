class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int ans=0;
        for(char x:directions){
            if(x=='L'){
                if(!st.empty()&&st.top()=='R'){
                    ans+=2;
                    st.pop();
                    while(!st.empty()&&st.top()=='R'){
                        ans++;
                        st.pop();
                    }
                    st.push('S');
                }else if(!st.empty()&&st.top()=='S'){
                    ans++;
                }else{
                    st.push(x);
                }
            }else if(x=='S'){
                while (!st.empty() && st.top() == 'R') {
                    ans++;
                    st.pop();
                }
                st.push('S');
            }else{
                st.push(x);
            }
        }
        return ans;
    }
};
class Solution {
public:
    int minSwaps(string s) {
        stack<int> st;
        int k=0;
        for(auto x:s){
            if(x=='['){
                st.push(x);
            }else if(x==']'){
                if(!st.empty()&&st.top()=='['){
                    st.pop();
                    continue;
                }
                k++;
            }
        }
        return (k+1)/2;
    }
};
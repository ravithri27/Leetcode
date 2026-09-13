class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(string s:operations){
            if(isdigit(s[0])||isdigit(s[1])){
                st.push(stoi(s));
            }else{
                if(s=="+"){
                    int top1=st.top();
                    st.pop();
                    int top2=st.top();
                    st.push(top1);
                    st.push(top1+top2);
                }else if(s=="D"){
                    st.push(st.top()*2);
                }else{
                    st.pop();
                }
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        int i=0,j=0;
        while(i<s.size()||j<t.size()){
            if(i<s.size()){
                if(!st1.empty()&&s[i]=='#'){
                    st1.pop();
                }else if(s[i]!='#'){
                    st1.push(s[i]);
                }
                i++;
            }
            if(j<t.size()){
                if(!st2.empty()&&t[j]=='#'){
                    st2.pop();
                }else if(t[j]!='#'){
                    st2.push(t[j]);
                }
                j++;
            }
        }
        return st1==st2;
    }
};
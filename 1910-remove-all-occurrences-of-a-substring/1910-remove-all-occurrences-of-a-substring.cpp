class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st;
        int i=0;
        while(i<s.size()){
            st.push_back(s[i]);
            if(st.size()>=part.size()){
                if(st.substr(st.size() - part.size()) == part){
                    st.erase(st.size() - part.size());
                }
            }
            i++;
        }
        return st;
    }
};
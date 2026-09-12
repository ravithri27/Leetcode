class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        for(auto x:arr){
            if(st.find(x*2)!=st.end()){
                return true;
            }else if(x%2==0&&st.find(x/2)!=st.end()){
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};
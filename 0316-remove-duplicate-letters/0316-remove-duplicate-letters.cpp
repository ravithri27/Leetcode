class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;
        vector<int> freq(26,0);
        vector<bool> used(26,false);

        for(char x:s){
            freq[x-'a']++;
        }

        for(char x:s){
            freq[x-'a']--;
            if(used[x-'a'])
                continue;
            while(!st.empty()&&freq[st.top()-'a']>0&&st.top()>x){
                used[st.top()-'a']=false;
                st.pop();
            }
            st.push(x);
            used[x-'a']=true;
        }

        string ans(st.size(),' ');
        int i=st.size()-1;
        while(!st.empty()){
            ans[i]=st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
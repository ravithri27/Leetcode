class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> freq(26);
        char ans;
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            freq[t[i]-'a']--;
        }
        for(int i=0;i<t.length();i++){
            if(freq[t[i]-'a']==-1){
                ans=t[i];
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mpp;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mpp[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            mpp[t[i]-'a']--;
        }
        for(int i=0;i<s.length();i++){
            if(mpp[s[i]-'a']!=0){
                return false;
            }
        }
        return true;
    }
};
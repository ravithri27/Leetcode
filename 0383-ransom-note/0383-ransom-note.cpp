class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i=0,j=0;
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        int n=ransomNote.size(),m=magazine.size();
        while(i<n&&j<m){
            if(ransomNote[i]==magazine[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(i==n){
            return true;
        }
        return false;
    }
};
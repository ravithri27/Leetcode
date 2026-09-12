class Solution {
public:
    bool isVowel(char s){
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='A'||s=='E'||s=='I'||s=='O'||s=='U'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int l=0,r=k-1,count=0,maxcount=0;
        for(int i=l;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        maxcount=count;
        while(r<s.length()-1){
            if(isVowel(s[l])){
                count--;
            }
            l++;
            r++;
            if(isVowel(s[r])){
                count++;
            }
            if(count>maxcount){
                maxcount=count;
            }
        }
        return maxcount;
    }
};
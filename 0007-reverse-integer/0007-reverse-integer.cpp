class Solution {
public:
    void swap(char& a,char& b){
        char temp=a;
        a=b;
        b=temp;
    }
    int reverse(int x) {
        string s;
        s=to_string(x);
        if(x<0){
            int i=1,j=s.size()-1;
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }else{
            int i=0,j=s.size()-1;
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        long long ans=stoll(s);
        if(ans>INT_MAX||ans<INT_MIN){
            return 0;
        }
        return int(ans);
    }
};
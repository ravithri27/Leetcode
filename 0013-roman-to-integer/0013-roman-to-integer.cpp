class Solution {
public:
    int value(char c){
        if(c=='I'){
            return 1;
        }else if(c=='V'){
            return 5;
        }else if(c=='X'){
            return 10;
        }else if(c=='L'){
            return 50;
        }else if(c=='C'){
            return 100;
        }else if(c=='D'){
            return 500;
        }
        return 1000;
    }
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        ans=value(s[n-1]);
        for(int i=n-2;i>=0&&ans<4000;i--){
            char prev=s[i+1],curr=s[i];
            if(value(prev)>value(curr)){
                ans-=value(curr);
            }else{
                ans+=value(curr);
            }
        }
        return ans;
    }
};
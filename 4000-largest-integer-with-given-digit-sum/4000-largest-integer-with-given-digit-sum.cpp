class Solution {
public:
    int largestInteger(int n, int s) {
        int ans=-1;
        if(s==0){
            return 0;
        }
        if(n==1){
            for(int i=0;i<=9;i++){
                if(i==s){
                    return i;
                }
            }
        }else if(n==2){
            for(int i=10;i<=99;i++){
                int sum=0;
                int num=i;
                while(num>0){
                    sum+=num%10;
                    num/=10;
                }
                if(sum==s){
                    if(ans<i){
                        ans=i;
                    }
                }
            }
        }else if(n==3){
            for(int i=100;i<=999;i++){
                int sum=0;
                int num=i;
                while(num>0){
                    sum+=num%10;
                    num/=10;
                }
                if(sum==s){
                    if(ans<i){
                        ans=i;
                    }
                }
            }
        }else if(n==4){
            for(int i=1000;i<=9999;i++){
                int sum=0;
                int num=i;
                while(num>0){
                    sum+=num%10;
                    num/=10;
                }
                if(sum==s){
                    if(ans<i){
                        ans=i;
                    }
                }
            }
        }else{
            for(int i=10000;i<=99999;i++){
                int sum=0;
                int num=i;
                while(num>0){
                    sum+=num%10;
                    num/=10;
                }
                if(sum==s){
                    if(ans<i){
                        ans=i;
                    }
                }
            }
        }
        if(ans==-1){
            return ans;
        }
        return ans;
    }
};
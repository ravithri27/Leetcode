class Solution {
public:
    int precedence(char ch){
        if(ch=='+'||ch=='-'){
            return 1;
        }
        return 2;
    }
    int calculate(string s) {
        int n=s.size();
        stack<int> nums;
        stack<char> ops;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                continue;
            }
            if(isdigit(s[i])){
                int num=0;
                while(i<n&&isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                i--;
                nums.push(num);
            }else{
                while(!ops.empty()&&(precedence(ops.top())>precedence(s[i])||precedence(ops.top())==precedence(s[i]))){
                    char op=ops.top();
                    ops.pop();
                    int b=nums.top();
                    nums.pop();
                    int a=nums.top();
                    nums.pop();
                    int ans=0;
                    if(op=='+'){
                        ans=a+b;
                    }else if(op=='-'){
                        ans=a-b;
                    }else if(op=='*'){
                        ans=a*b;
                    }else{
                        ans=a/b;
                    }
                    nums.push(ans);
                }
                ops.push(s[i]);
            }
        }
        while(!ops.empty()){
            char op=ops.top();
            ops.pop();
            int b=nums.top();
            nums.pop();
            int a=nums.top();
            nums.pop();
            int ans=0;
            if(op=='+'){
                ans=a+b;
            }else if(op=='-'){
                ans=a-b;
            }else if(op=='*'){
                ans=a*b;
            }else{
                ans=a/b;
            }
            nums.push(ans);
        }
        return nums.top();
    }
};
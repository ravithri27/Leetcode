class Solution {
public:
    string intToRoman(int num) {
        string ans;
        vector<string> roman={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        vector<int> value={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        int i=12;
        while(i>=0&&num>0){
            if(num>=value[i]){
                num-=value[i];
                ans+=roman[i];
                if(num<value[i]){
                    i--;
                }
            }else{
                i--;
            }
        }
        return ans;
    }
};
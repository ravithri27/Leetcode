class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n>0){
            arr.push_back(n%10);
            n/=10;
        }
        int len=arr.size();
        if(len==2){
            return arr[0]*arr[1];
        }
        sort(arr.begin(),arr.end());
        return arr[len-1]*arr[len-2];
    }
};
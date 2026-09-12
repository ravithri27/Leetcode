class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                res.push_back(arr[i]);
            }else{
                res.push_back(0);
                res.push_back(0);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=res[i];
        }
    }
};
class Solution {
public:
    void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n1=image.size(),n2=image[0].size();
        for(int k=0;k<n1;k++){
            int i=0,j=n2-1;
            while(i<=j){
                if(i!=j){
                    image[k][i]^=1;
                    image[k][j]^=1;
                    swap(image[k][i],image[k][j]);
                    i++;
                    j--;
                }else{
                    image[k][i]^=1;
                    i++;
                    j--;
                }
            }
        }
        return image;
    }
};
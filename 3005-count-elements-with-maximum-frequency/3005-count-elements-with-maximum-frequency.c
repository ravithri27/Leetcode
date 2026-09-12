int maxFrequencyElements(int* nums, int numsSize) {
    int hash[101]={0};
    for(int i=0;i<numsSize;i++){
        hash[nums[i]]+=1;
    }
    int res=0,max=hash[0];
    int c=sizeof(hash)/sizeof(hash[0]);
    for(int i=1;i<c;i++){
        if(hash[i]>max){
            max=hash[i];
        }
    }
    for(int i = 0; i < c; i++) {
        if(hash[i] == max) {
        res += hash[i];
        }
    }
    return res;
}
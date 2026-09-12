bool isPalindrome(int x) {
    int r;
    long temp=x,rev=0;
    while(temp>0){
    r=temp%10;
    rev=(rev*10)+r;
    temp/=10;
    }
    if(x==rev) return true;
    else return false;
}
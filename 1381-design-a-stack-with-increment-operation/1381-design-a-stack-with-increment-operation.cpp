class CustomStack {
public:
    vector<int> st;
    int i=-1;
    int n;
    CustomStack(int maxSize) {
        n=maxSize;
        st.resize(maxSize,0);
    }
    
    void push(int x) {
        if(i<n-1){
            i++;
            st[i]=x;
        }
    }
    
    int pop() {
        int x;
        if(i==-1){
            return -1;
        }
        if(i>=0){
            x=st[i];
            st.pop_back();
            i--;
        }
        return x;
    }
    
    void increment(int k, int val) {
        if(k>n){
            for(int j=0;j<n;j++){
                st[j]+=val;
            }
        }else{
            for(int j=0;j<k;j++){
                st[j]+=val;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
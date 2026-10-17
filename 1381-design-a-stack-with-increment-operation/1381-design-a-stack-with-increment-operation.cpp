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
        if(i==-1){
            return -1;
        }
        int x=st[i];
        st.pop_back();
        i--;
        return x;
    }
    
    void increment(int k, int val) {
        int limit;
        if(k>i+1){
            limit=i+1;
        }else{
            limit=k;
        }
        for (int j = 0; j < limit; j++) {
            st[j] += val;
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
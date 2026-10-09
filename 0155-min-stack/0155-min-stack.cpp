class MinStack {
public:
    stack<long long> st;
    long long min=INT_MAX;
    MinStack() {
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            min=value;
        }else if(min>value){
                st.push(2LL*value-min);
                min=value;
        }else{
            st.push(value);
        }
    }
    
    void pop() {
        if(min>st.top()){
            min=2LL*min-st.top();
            st.pop();
        }else{
            st.pop();
        }
    }
    
    int top() {
        if(min>st.top()){
            return (int)min;
        }
        return (int)st.top();
    }
    
    int getMin() {
        return (int)min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
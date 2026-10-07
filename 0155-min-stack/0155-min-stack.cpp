class MinStack {
public:
    stack<pair<int,int>> st;
    int min=INT_MAX;
    MinStack() {
    }
    
    void push(int value) {
        if(st.empty()){
            st.push({value,value});
            min=value;
        }else{
            if(st.top().second>value){
                min=value;
            }else{
                min=st.top().second;
            }
            st.push({value,min});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
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
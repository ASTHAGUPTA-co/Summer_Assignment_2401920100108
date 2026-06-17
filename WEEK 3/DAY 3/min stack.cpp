class MinStack {
public:
    stack<long long>st;
    long long mini;
    MinStack() {
        
    }
    void push(int value) {
        if(st.empty()){
            mini = value;
            st.push(value);
        }else if(value<=mini){
            st.push((long long)2*value-mini);
            mini = value;
        }else{
            st.push(value);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        if(st.top()<mini){
            mini = 2*mini - st.top();
        }
        st.pop();
    }
    
    int top() {
       if(st.empty()) return -1;
       long long ele = st.top();
       if(st.top()<=mini){
        ele = mini;
       } 
       return ele;
    }
    
    int getMin() {
        return mini;
    }
};

class MyStack {
public:
    /** Initialize your data structure here. */
     queue <int> q1;
        queue <int> q2;
       
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty()) 
        return -1;
        else {
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            int x=q2.back();
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop();
            return x;
              }
    }
    
    /** Get the top element. */
    int top() {
        if(q1.empty()) 
        return -1;
        else {
             int x=q1.back();
            return x;
              }
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty()) 
        return 1;
        else return 0;
    }
};

class MinStack {
public:
    /** initialize your data structure here. */int arr[9999],min,tp;
    MinStack() {
        tp=-1;
    }
    
    void push(int x) {
        tp++;
        arr[tp]=x;
        cout<<tp<<" push\n";    
        
    }
    
    void pop() {
        --tp;
    cout<<tp<<" pop\n";
        
    }
    
    int top() {
        cout<<tp<<" top\n";
    return arr[tp];
        
    }
    
    int getMin() {
        cout<<tp<<" min\n";
     min = INT_MAX;
    for(int i = 0;i<=tp;i++)
    {
        if(min>arr[i])
            min = arr[i];
    }
    return min;
    }
};

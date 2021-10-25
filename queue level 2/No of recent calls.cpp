class RecentCounter {
public:
    queue <int> q;
    
    RecentCounter() {
        
    }
    
    int ping(int t) {
        
        q.push(t);
        int k=t-3000;
        while(q.front()<k)
            q.pop();
        return q.size();
         
        
    }
};

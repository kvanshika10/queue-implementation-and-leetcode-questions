// for example 4 
// queue = 0 1 2 3
// for i(i=1) times remove the element from the front and insert it in the rear position
// a[front]=i;
// pop the front element and i++
// repeat the same process until queue is empty



#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
    queue <int> q;
    int n;
    cin >> n;
    int a[n];
    int i;
    // store the index of array in queue
    for(i=0;i<n;i++){
        a[i]=0;
        q.push(i);
    }
    
    i=1;
    while(!q.empty()){
        int temp=i;
        while(temp--){
            q.push(q.front());
            q.pop();
        }
        a[q.front()]=i;
        q.pop();
        i++;
    }
          for(i=0;i<n;i++)
            cout << a[i] << " ";
     cout << endl;
    }
}
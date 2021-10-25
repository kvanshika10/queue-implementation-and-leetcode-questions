#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n,k;
	    cin >> n >> k;
	    deque <ll> q(k);
	    ll a[n],i;
	    for(i=0;i<n;i++)
	    cin >> a[i];
	       for(i=0;i<k;i++){
	            //check if current element is greater than the last element i the queue so pop it it 
	           while(!q.empty()&&a[i]>=a[q.back()]) 
	               q.pop_back();
	          // pushes the element in deque 
	             q.push_back(i);
	       }
	       for(i;i<n;i++){
	           cout << a[q.front()] << " ";
	           // check if the front element lies in the current window 
	           while(!q.empty()&&q.front()<=i-k)
	                   q.pop_front();
	       while(!q.empty()&&a[i]>=a[q.back()])
	             q.pop_back();
	             
	             q.push_back(i);
	       }
	       cout << a[q.front()] << endl;
	}
	return 0;
}
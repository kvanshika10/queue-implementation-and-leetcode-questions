#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    ll k,i;
	    cin >> n >> k;
	    ll x;
	    queue <ll> q;

	    for(i=0;i<n;i++){
	       cin >> x;
	       q.push(x);
	    }
	    ll count=0;
	       while(k--){
	           ll max=q.front();
	         for(i=0;i<n;i++){
	             if(q.front()>max)
	             max=q.front();
	             ll x=q.front();
	             q.push(x);
	             q.pop();
	         }
	         count+=max;
	         while(q.front()!=max){
	             q.push(q.front());
	             q.pop();
	         }
	         
	          q.front()/=2;
	        
	          
	       }
	           
           	
	    cout << count << endl;
	}
	
	return 0;
}
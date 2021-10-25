#include<bits/stdc++.h>
using namespace std;
#define ll long long
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        queue<ll> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<ll> modifyQueue(queue<ll> q, int k)
{
    stack<ll> a;
    ll i;
    for(i=0;i<k;i++){
        a.push(q.front());
        q.pop();
    }
    string s1="";
    while(!q.empty()){
        s1+=q.front();
        q.pop();
    }
    while(!a.empty()){
        q.push(a.top());
        a.pop();
    }
    for(i=0;i<s1.size();i++){
        q.push(s1[i]);
    }
    return q;
}
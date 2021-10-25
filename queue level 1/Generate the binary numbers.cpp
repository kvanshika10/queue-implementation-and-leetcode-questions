void gen(int n){
queue<string> q;
	q.push("1");
	while(n--){
	    string s1;
	    s1=q.front();
	    cout << s1 << " ";
	      q.pop();
	      string s2=s1;
	      q.push(s1.append("0"));
	      q.push(s2.append("1"));
	}
}
int main() 
{
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    gen(n);
	    cout << endl;
	           }
	}


int count (string s1){
    int l=s1.size();
     if (l%2!=0)
     return -1;
     else if(l==0)
     return 0;
     
    stack <char> a;
     a.push(s1[0]);
     
     // push the string in a stack and remove the balanced parenthsis
   for(int i=1;i<l;i++){
       if(s1[i]=='}'&&!a.empty()&&a.top()=='{')
       a.pop();
       else a.push(s1[i]);
   }
     
   // count the unbalanced parenthesis
   float m=0,n=0;
      while(!a.empty()){
              if(a.top()=='{')
              m++;
              else n++;
              a.pop();
          }
          
          return  ceil(m/2)+ceil(n/2);

}
     
    
    


int main() 
{
    int t;
    cin >> t;
    while(t--){
    string s1;
    cin >> s1;
   cout << count(s1) << endl;
               }

#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump [],int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}
// } Driver Code Ends


/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{

    int sum=0,diff=0,start=0;
    for(int i=0;i<n;i++){
        sum+=p[i].petrol-p[i].distance;
        if(sum<0)
        {
            diff+=sum;
            start=i+1;
            sum=0;
        }
        
    }
    if(sum+diff>=0)
    return start;
       else return -1;
}
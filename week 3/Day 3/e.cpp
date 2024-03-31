#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
    ll n;
    cin>>n;
    vector<ll>a[n];
    for(ll i=0;i<n;i++){
            for(ll j=0;j<n-1;j++){
        int b;
        cin>>b;
        a[i].push_back(b);
            }
    }
    int d,p;
   int c1=a[0][n-2];
   int c2=a[1][n-2];
   if(a[2][n-2]==c1){
    d=c1;
   }
   else{
    d=c2;
   }
   for(ll i=0;i<n;i++){
        if(a[i][n-2]!=d){
            p=i;
            break;
        }
    }
     for(int i=0;i<n-1;i++){
        cout<<a[p][i]<<" ";
     }
     cout<<d<<endl;

	}
}

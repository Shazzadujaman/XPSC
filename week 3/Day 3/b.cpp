#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
       ll n,q;
        cin>>n>>q;
        ll a[n],s=0,b[n];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
            s=s+a[i];
            b[i]=s;
        }
        for(ll i=0;i<q;i++){
        ll l,r,k,c;
        cin>>l>>r>>k;
        if(l==1){
            c=b[r];
        }
        else
        c=b[r]-b[l-1];
        ll d=(r-l+1)*k;
        if((s-c+d)%2==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }


	}
}

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
    vector<string>v;
    for(ll i=0;i<n;i++){
            string s;
        cin>>s;
    v.push_back(s);
    }
    for(ll i=0;i<n;i++){
        ll f=0;
       for(ll j=0;j<n;j++){
        if(j==i){
            continue;
        }
        string s;
        for(ll k=j;k<n;k++){
            s=v[j]+v[k];
            if(s==v[i]){
                f=1;
                break;
            }
            s=v[k]+v[j];
            if(s==v[i]){
                f=1;
                break;
            }

        }
       }
       if(f==1){
        cout<<1;
       }
       else{
        cout<<0;
       }
    }
cout<<endl;
	}
}

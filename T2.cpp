#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        while(k--){
            ll q,f=0;
            cin>>q;
            ll l=0,r=n-1;
            while(l<=r){
                ll mid=(l+r)/2;
        
                if(q<a[mid]){
                    
                    r=mid-1;
                }
                else{
                    f=mid+1;
                    l=mid+1;
                }
            }
            cout<<f<<endl;
        }
        
    }

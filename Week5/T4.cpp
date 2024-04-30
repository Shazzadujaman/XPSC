#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    
        ll n,k;
        cin>>n;
        vector<ll>a;
        for(ll i=0;i<n;i++){
            int d;
            cin>>d;
            a.push_back(d);
        }
        sort(a.begin(),a.end());
        cin>>k;
        while(k--){
            ll l,r,lp,rp;
            cin>>l>>r;
            
            auto it1=lower_bound(a.begin(),a.end(),l)-a.begin();
          

            auto it2=upper_bound(a.begin(),a.end(),r)-a.begin();
            

            cout<<it2-it1<<" "<<endl;
        }
        
    }

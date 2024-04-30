#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        vector<int>p(n);
        p[0]=a[0];
        for(int i=1;i<n;i++){
            p[i]=a[i]+p[i-1];
        }
        while(k--){
            int q;
            cin>>q;
            int l=0,r=n-1,ans=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(p[mid]>=q){
                    ans=mid+1;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            cout<<ans<<endl;

        }


        }
       
    }

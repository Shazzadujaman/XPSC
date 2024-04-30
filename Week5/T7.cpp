#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int p[n];
   p[0]=a[0];
   for(int i=1;i<n;i++){
    p[i]=a[i]+p[i-1];
   }
   
   int q;
   cin>>q;
   while(q--){
    int k;
    cin>>k;
    int l=0,r=n-1,ans=0;
    while(l<=r){
        int mid=(l+r)/2;
        if(p[mid]<k){
            l=mid+1;
        }
        else if(p[mid]>=k){
            ans=mid+1;
            r=mid-1;
        }
        
    }
       cout<<ans<<endl;
   }
       
}

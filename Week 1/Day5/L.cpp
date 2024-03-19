#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int mx=a[1],c=0;
     for(int i=1;i<=n;i++){
        if(i<a[i]){
            int s=a[i]-i;
            c=max(c,s);
        }
    }
    cout<<c<<endl;
}

}

#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,c=0;
cin>>n;
long long int a[n+1];
long long v[n+1]={0};
for(long long int i=0;i<n-1;i++){
    cin>>a[i];
    v[a[i]]++;
}

for(long long int i=1;i<=n;i++){
    if(v[i]==0){
        cout<<i<<endl;
        break;
    }
}

}

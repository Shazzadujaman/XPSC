#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}
int k=0;
int c=0,j=0;
for(int i=0;i<m;i++){

    while(j<n){
        if(b[i]>a[j]){
            c++;
        }
        else{

            break;
        }
        j++;
    }
    cout<<c<<endl;
}
}

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
vector<int>v;
int i=0,j=0;
while(i<n && j<m){
    if(a[i]<b[j]){
        v.push_back(a[i]);
        i++;
    }
    else{
        v.push_back(b[j]);
        j++;
    }
}
while(i<n){
    v.push_back(a[i]);
    i++;
}
while(j<m){
    v.push_back(b[j]);
    j++;
}
for(int k=0;k<v.size();k++){
    cout<<v[k]<<" ";
}
}

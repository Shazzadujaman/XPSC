#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,c=0;
cin>>n;
long long int a[n];
long long int s=0;
vector<int>v;
for(long long int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2==0){
        s=s+a[i];
    }
    else{
        c++;
        v.push_back(a[i]);
    }
}
sort(v.begin(),v.end());
if(c%2==0){
    for(long long int i=0;i<v.size();i++){
        s=s+v[i];
    }
}
else{
     for(long long int i=1;i<v.size();i++){
        s=s+v[i];
    }
}
cout<<s<<endl;

}

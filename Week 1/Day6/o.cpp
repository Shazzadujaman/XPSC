#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    vector<int>v;
 for(int i=0;i<n;i++){
    if(s[i]=='g'){
        v.push_back(i);
    }
 }
 int m=0,p,k=0;
  if(c=='g'){
    cout<<0<<endl;
  }
  else{
  for(int i=0;i<n;i++){
        k=0;
    if(s[i]==c){
        for(int j=0;j<v.size();j++){
            if(v[j]>i){
                p=v[j]-i;
                k=1;
                break;
            }
        }
        if(k==0){
            p=n-i+v[0];
        }
        m=max(m,p);
    }
 }
cout<<m<<endl;

  }
  v.clear();
}

}

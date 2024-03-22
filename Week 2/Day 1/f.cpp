#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
       int k;
       cin>>k;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++){
        if(s[i]=='U'){
                if(a[j]==0){
                    a[j]=9;
                }
            else
            a[j]=a[j]-1;
        }
        else{
            if(a[j]==9){
                a[j]=0;
            }
            else{
                a[j]++;
            }
        }
       }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
}

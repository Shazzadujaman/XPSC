#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   if(n<=1){
    cout<<"YES"<<endl;
   }
   else{
   int f[26]={0};
   for(int i=0;i<n;i++){
    f[s[i]-'a']++;
   }
   int c=0;
   for(int i=0;i<26;i++){
    if(f[i]%2==1){
        c++;
    }
   }
   if(c-k==0 || c-k==1){
    cout<<"YES"<<endl;
   }
   else if(c-k<0){
    int d=abs(c-k);
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

   }
}
}

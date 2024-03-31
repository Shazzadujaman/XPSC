#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,i,j,c=0,k,p=0;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        cin>>s;
       for(j=0;j<s.length();j++){
		s[j]=tolower(s[j]);
       }
       for(j=0;j<s.length();j++){
        if(s[j]!=s[j+1]){
            c++;
        }
       }
       if(c==4){
          for(k=0;k<n;k++){
        if(s[k]=='m'&&s[k+1]=='e'||s[k]=='e'&&s[k+1]=='o'||s[k]=='o'&&s[k+1]=='w'){
                p++;
        }
       }
        if(p==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else{
        cout<<"NO"<<endl;
       }
       c=0;
       p=0;
       }
}

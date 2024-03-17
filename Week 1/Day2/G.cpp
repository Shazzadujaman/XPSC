#include<bits/stdc++.h>
using namespace std;
int main(){

   string s;
   cin>>s;
   int a[26]={0};
   for(char c:s){
    a[c-'a']++;
   }
   int flag=0;
   for(int i=0;i<26;i++){
    if(a[i]==0){
            char c=i+'a';
        cout<<c<<endl;
        flag=1;
    break;
    }
   }
   if(flag==0){
    cout<<"None"<<endl;
   }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
int s,t;
cin>>s>>t;
int s1=0;
for(int i=0;i<=s;i++){
    for(int j=0;j<=s-i;j++){
       for(int c=0;c<=s-i-j;c++)
        if((i*j*c)<=t){
            s1++;
        }
    }
}
cout<<s1<<endl;
}

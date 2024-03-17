#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   if(a==b){
    cout<<a+b<<endl;
   }
   else if(a>b){
    int s=a;
    a--;
    if(b>a){
        s=s+b;
    }
    else{
        s=s+a;
    }
    cout<<s<<endl;
   }
   else{
    int d=b;
    b--;
    if(a>b){
        d=d+a;
    }
    else{
        d=d+b;
    }
    cout<<d<<endl;
   }
}

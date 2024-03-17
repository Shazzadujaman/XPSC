#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a;
   if(a<10){
    cout<<"000"<<a<<endl;
   }
   else if(a<100){
    cout<<"00"<<a<<endl;
   }
   else if(a<1000){
    cout<<"0"<<a<<endl;
   }
   else{
    cout<<a<<endl;
   }
}

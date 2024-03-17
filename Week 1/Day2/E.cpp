#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int flag=0,d;
   for(int i=a;i<=b;i++){
    if(i%c==0){
        flag=1;
        d=i;
        break;
    }
   }
   if(flag==1){
    cout<<d<<endl;
   }
   else{
    cout<<-1<<endl;
   }
}

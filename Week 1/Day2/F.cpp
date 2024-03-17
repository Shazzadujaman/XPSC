#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int s=0,p=a;
   while(p<=c){
    s=s+b;
    p=p+a;
   }
   cout<<s<<endl;
}

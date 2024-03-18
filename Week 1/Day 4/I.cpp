#include<bits/stdc++.h>
using namespace std;
int main(){
long long int x,y;
cin>>x>>y;
long long int s=1;
while(x<=y){
    x=x*2;
    if(x<=y){
        s++;
    }
}
cout<<s<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
     int x,y,c,p,i,s;
cin>>x>>y>>c;
int f=0;
if(c%x==0){
    cout<<"YES"<<endl;
    f=1;
}
else if(c%y==0){
    cout<<"YES"<<endl;
    f=1;
}

else{
    i=2;
    s=x;
    while(s<=c){
        p=c-s;
        if(p%y==0){
            cout<<"YES"<<endl;
            f=1;
            break;
        }
        s=x*i;
        i++;

    }
}
if(f==0){
    cout<<"NO"<<endl;
}
}

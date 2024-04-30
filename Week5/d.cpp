#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,a,b,c,i,b1,a1;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>c;
        a1=a-1;
        if(b>c){
            b1=(b-c)+(c-1);
        }
        else{
            b1=(c-b)+(c-1);
        }
        if(b1>a1){
            cout<<1<<endl;
        }
        else if(b1<a1){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
}
 
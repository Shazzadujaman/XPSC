#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
 int m=0;
            int p1,p2,d,x;

    if(c=='g'){
        cout<<0<<endl;
    }
    else{
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            p2=i;
            x=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
            int f=0;
        if(s[i]==c){
            p1=i;
            for(int j=i+1;j<n;j++){
                if(s[j]=='g'){
                    p2=j;
                    f=1;
                    break;
                }
            }
            if(f==0){
                    p2=x;
                d=n-1-p1+p2+1;
            }
            else{
                d=p2-p1;
            }
     m=max(m,d);
        }

    }
    cout<<m<<endl;
}

}

}

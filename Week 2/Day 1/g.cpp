#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
        string s;
    cin>>s;
    if(n==5){


    int t=0,I=0,m=0,u=0,r=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            t++;
        }
        else if(s[i]=='i'){
            I++;
        }
        else if(s[i]=='m'){
            m++;
        }
        else if(s[i]=='u'){
            u++;
        }
        else if(s[i]=='r'){
            r++;
        }
    }
    if(t==1 && I==1 && m==1 && u==1 && r==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    else{
        cout<<"NO"<<endl;
    }
}
}

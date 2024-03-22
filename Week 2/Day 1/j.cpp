#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int f=0;
    for(int i=0;i<n;i++){

            if(s1[i]=='R' && s2[i]=='G' || s1[i]=='R' && s2[i]=='B'  || s1[i]=='G' && s2[i]=='R'  || s1[i]=='B' && s2[i]=='R' ){
                f=1;
                break;
            }

    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}

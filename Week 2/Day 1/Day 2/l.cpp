#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=1,me;
    sort(a,a+n);
          int c=1;
    for(int i=0;i<n-1;i++){

        if(a[i]==a[i+1]){
            c++;
        }
        else{
            c=1;
    }
    mx=max(mx,c);
    if(mx==c)
        me=a[i];

    }
    int s=0,p=0,d=mx;
    while(mx!=n){
        if(p==0){
            s++;
            p=p+mx;
        }
        else{
            s++;
            mx++;
            p--;
        }
    }
    cout<<s<<endl;

}
}

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
    sort(a,a+n);
    int c=1;
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]){
            c++;
        }

    }
    int p=n-c;
    if(p%2==1){
        c--;
    }
    cout<<c<<endl;

}
}

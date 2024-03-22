#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int k,s;
cin>>k>>s;
int c=0;
for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
        if(s-i-j<=k && s-i-j>=0){
            c++;
        }
    }
}
cout<<c<<endl;
}

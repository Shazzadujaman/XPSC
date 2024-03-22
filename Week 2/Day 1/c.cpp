#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n,x;
cin>>n>>x;
int a[n];
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]!=x){
        v.push_back(a[i]);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}

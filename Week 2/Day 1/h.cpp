#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
   int n,m;
   cin>>n>>m;
   vector<string>v;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v.push_back(s);
   }
   vector<int>v2;
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
            int s=0;
        for(int k=0;k<m;k++){
            int d=abs(v[i][k]-v[j][k]);
            s=s+d;

        }
        v2.push_back(s);
            s=0;
    }
   }
   sort(v2.begin(),v2.end());
   cout<<v2[0]<<endl;
   v2.clear();
}
}

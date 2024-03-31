#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
       ll n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int mx=INT_MIN,p,q;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int s=a[i][j];
                 p=i,q=j;
                while(q!=0 && p!=0){
                    q--;
                    p--;
                    s=s+a[p][q];
                }
                p=i,q=j;
                while(p!=0 && q!=m-1){
                    p--;
                    q++;
                    s=s+a[p][q];
                }
                p=i,q=j;
                while(p!=n-1 && q!=0){
                    p++;
                    q--;
                    s=s+a[p][q];
                }
                p=i,q=j;
                while(p!=n-1 && q!=m-1){
                    p++;
                    q++;
                    s=s+a[p][q];
                }

                mx=max(mx,s);

            }
        }
        cout<<mx<<endl;

	}
}

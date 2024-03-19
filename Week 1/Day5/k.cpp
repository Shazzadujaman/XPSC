#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       map<string,int>mp;
       string s;
       vector<string>v1;
       vector<string>v2;
       vector<string>v3;

        for(int j=0;j<n;j++){
            cin>>s;
            v1.push_back(s);
            mp[s]++;
        }
                for(int j=0;j<n;j++){
            cin>>s;
            v2.push_back(s);
            mp[s]++;
                }

                for(int j=0;j<n;j++){
            cin>>s;
            v3.push_back(s);
            mp[s]++;
        }
       int p1=0,p2=0,p3=0;
       for(int i=0;i<n;i++){
        if(mp[v1[i]]==1){
            p1=p1+3;
        }
        else if(mp[v1[i]]==2){
            p1=p1+1;
        }
       }
       for(int i=0;i<n;i++){
        if(mp[v2[i]]==1){
            p2=p2+3;
        }
        else if(mp[v2[i]]==2){
            p2=p2+1;
        }
       }
       for(int i=0;i<n;i++){
        if(mp[v3[i]]==1){
            p3=p3+3;
        }
        else if(mp[v3[i]]==2){
            p3=p3+1;
        }
       }
       cout<<p1<<" "<<p2<<" "<<p3<<endl;
    }

}

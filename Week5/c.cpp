#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                int a=(s[i-2]-'0')*10+(s[i-1]-'0')-1;
                char c=a+'a';
                st.push(c);
                i=i-2;
            }
            else{
                int a=s[i]-'0'-1;
                char c=a+'a';
                st.push(c);
            }
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
        
    }
}
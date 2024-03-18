#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s1=0,s2=0,s3=0;
        vector<string>v1;
        vector<string>v2;
        vector<string>v3;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v1.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v2.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v3.push_back(s);
        }
        for(int i=0;i<n;i++){
                int f1=0,f2=0;
            for(int j=0;j<n;j++){
                if(v1[i]==v2[j]){
                        f1=1;
                    for(int k=0;k<n;k++){
                        if(v1[i]==v3[k]){
                            f2=1;
                            break;
                        }
                    }
                }
            }
            if(f2==0){
            for(int k=0;k<n;k++){
                        if(v1[i]==v3[k]){
                            f2=1;
                            break;
                        }
                    }
            }
            if(f1==1 && f2==0 || f1==0 && f2==1){
                    s1=s1+1;
                }
            else if(f1==0 && f2==0){
                    s1=s1+3;
                }
        }
         for(int i=0;i<n;i++){
                int f1=0,f2=0;
            for(int j=0;j<n;j++){
                if(v2[i]==v1[j]){
                        f1=1;
                    for(int k=0;k<n;k++){
                        if(v2[i]==v3[k]){
                            f2=1;
                            break;
                        }
                    }
                }
            }
            if(f2==0){
            for(int k=0;k<n;k++){
                        if(v2[i]==v3[k]){
                            f2=1;
                            break;
                        }
                    }
            }
            if(f1==1 && f2==0 || f1==0 && f2==1){
                    s2=s2+1;
                }
            else if(f1==0 && f2==0){
                    s2=s2+3;
                }
        }
         for(int i=0;i<n;i++){
                int f1=0,f2=0;
            for(int j=0;j<n;j++){
                if(v3[i]==v1[j]){
                        f1=1;
                    for(int k=0;k<n;k++){
                        if(v3[i]==v2[k]){
                            f2=1;
                            break;
                        }
                    }
                }
            }
            if(f2==0){
            for(int k=0;k<n;k++){
                        if(v3[i]==v2[k]){
                            f2=1;
                            break;
                        }
                    }
            }
            if(f1==1 && f2==0 || f1==0 && f2==1){
                    s3=s3+1;
                }
            else if(f1==0 && f2==0){
                    s3=s3+3;
                }
        }


        cout<<s1<<" "<<s2<<" "<<s3<<endl;
        v1.clear();
        v2.clear();
        v3.clear();
    }

}

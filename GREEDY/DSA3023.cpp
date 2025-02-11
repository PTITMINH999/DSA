#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    int n; cin>>n;
    string s; cin>>s;
    int cX=0,cT=0;
    for(char c:s){
        if(c=='X') cX++;
        if(c=='T') cT++;
    }
    int ans=0;
    for(int i=0;i<cX;i++){
        if(s[i]=='T'){
            int j=cX;
            while(s[j]!='X') j++;
            swap(s[i],s[j]);
            ans++;
        }
        else if(s[i]=='D'){
            int j=n-1;
            while(s[j]!='X') j--;
            swap(s[i],s[j]);
            ans++;
        }
    }
    for(int i=cX;i<cX+cT;i++){
        if(s[i]!='T'){
            int j=cX+cT;
            while(s[j]!='T') j++;
            swap(s[i],s[j]);
            ans++;
        }
    }
    cout<<ans;
}
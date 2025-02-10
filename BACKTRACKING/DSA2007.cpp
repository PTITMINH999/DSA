#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
string s,ans;
void Try(int i,int k){
    // k: số bước còn lại
    if(k==0 || i==s.size()) return;
    char maxi=*max_element(s.begin()+i,s.end());
    if(maxi==s[i]) Try(i+1,k);
    for(int j=i+1;j<s.size();j++){
        if(s[j]==maxi){
            swap(s[i],s[j]);
            if(ans<s) ans=s;
            if(i<s.size()-1) Try(i+1,k-1);
            swap(s[i],s[j]);//đỏi chỗ về trạng thái trc khi quay lui để so sánh ans vs lần quay lui tiếp
        }
    }
}
int main(){
    faster();
    run(){
        int k;
        cin>>k>>s;
        ans=s;
        Try(0,k);
        cout<<ans<<endl;
    }
}
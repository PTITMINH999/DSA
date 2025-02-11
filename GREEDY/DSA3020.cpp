#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
int main(){
    faster();
    run(){
        string s; cin>>s;
        stack<char> st;
        int ans=0,cnt=0;// cnt: đếm số lượng ngoặc đúng đã xóa
        for(char c:s){
            if(st.empty()){
                cnt=0;
                st.push(c);
            }
            else if(st.top()=='[' && c==']'){
                cnt+=2;
                st.pop();
            }
            else if(st.top()==']' && c=='['){
                ans+= st.size()+cnt;
                st.pop();
            }
            else st.push(c);
        }
        cout<<ans<<endl;
    }
}
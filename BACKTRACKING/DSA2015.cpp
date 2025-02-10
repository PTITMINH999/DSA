#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int k;
string s;
map<string,int> m;
bool check(string a){
    if(a.size()<2) return 0;
    stack<char> st;
    for(int i=0;i<a.size();i++){
        if(a[i]=='(') st.push(a[i]);
        else if(a[i]==')'){
            if(st.empty()) return 0;
            else st.pop();
        }
    }
    return st.empty();
}
void Try(string a,int pos){
    if(check(a)){
        // Nếu a.size càng lớn thì số phép loại bỏ '(';')' càng ít
        if(a.size()>k){
            k=a.size();
            m.clear();
            m[a]++;
        }
        else if(a.size()==k) m[a]++;
        return;
    }
    for(int i=pos+1;i<a.size();i++){
        if(a[i]=='(' || a[i]==')'){
            string c=a;
            c.erase(i,1);
            Try(c,i-1);
        }
    }
}
int main(){
    faster();
    run(){
        k=0;
        m.clear();
        cin>>s;
        Try(s,-1);
        if(m.empty()) cout<<-1;
        else{
            for(auto it:m) cout<<it.first<<" ";
        }
        cout<<endl;
    }
}
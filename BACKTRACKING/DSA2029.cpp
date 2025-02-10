#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
// a:cột bắt đầu, b: cột trung gian, c: cột đích
void send(int n,char a,char b,char c){
    if(n==1){
        cout<<a<<" -> "<<c<<endl;
        return;
    }
    // chia ra làm 3 bài toán
    send(n-1,a,c,b);// chuyển n-1 trên cùng sáng cột b
    send(1,a,b,c);// chuyển đĩa to nhất sang cột c
    send(n-1,b,a,c);// chuyển n-1 đĩa từ cột b -> c
}
int main(){
    faster();
    int n;cin>>n;
    send(n,'A','B','C');
}
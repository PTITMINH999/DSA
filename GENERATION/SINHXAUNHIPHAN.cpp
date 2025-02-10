#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int n,x[100];// lưu cấu hình
bool ok=0;// check cấu hình cuối
// void init(){
//     for(int i=1;i<=n;i++) x[i]=0;
// }
void sinh(){
    int i=n;
    while(i>=1 && x[i]==1){
        x[i]=0;
        i--;
    }
    if(i==0) ok=1;
    else x[i]=1;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    int cnt =0;
    while(cnt<=6){
        for(int i=1;i<=n;i++) cout<<x[i];
        cout<<endl;
        sinh();
        cnt++;
    }
}
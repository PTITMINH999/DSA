#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
vector<vector<int>> A,B;
vector<int> id={0,1,2,3,4};
vector<int> dau(4,0);
// Quay lui tìm ra các trg hợp xếp toán tử +,-,*
void Try(int i){
    for(int j=0;j<=2;j++){
        dau[i]=j;
        if(i==3) B.push_back(dau);
        else Try(i+1);
    }
}
string solve(){
    int res[5];
    for(int i=0;i<5;i++) cin>>res[i];
    for(auto X:A){
        for(auto Y:B){
            int sum=res[X[0]];
            // Y.size==4;
            for(int i=0;i<Y.size();i++){
                if(Y[i]==0) sum+=res[X[i+1]];
                else if(Y[i]==1) sum-=res[X[i+1]];
                else sum*=res[X[i+1]];
            }
            if(sum==23) return"YES\n"; 
        }
    }
    return"NO\n";
}
int main(){
    Try(0);
    // Hoán vị các chỉ số của 5 số
    do{
        A.push_back(id);
    }while(next_permutation(id.begin(),id.end()));
    run(){
        cout<<solve();
    }
}
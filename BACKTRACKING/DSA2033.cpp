#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
bool check(vector<int> &a,int n){
    for(int i=2;i<=n;i++) if(abs(a[i]-a[i-1])==1) return 0;
    return 1;
}
int main(){
    faster();
    run(){
        int n;cin>>n;
        if(n<=3){
            cout<<endl;
            continue;
        }
        vector<int> a(n+1);
        for(int i=1;i<=n;i++) a[i]=i;
        do{
            if(check(a,n)){
                for(int i=1;i<=n;i++) cout<<a[i];
                cout<<endl;
            }
        }while(next_permutation(a.begin()+1,a.end()));
    }
}
// int n,a[15],used[15];
// void Try(int i){
//     for(int j=1;j<=n;j++){
//         if(!used[j] && (i==1 || abs(a[i-1]-j)>1)){
//             a[i]=j;
//             used[j]=1;
//             if(i==n){
//                 for(int k=1;k<=n;k++){
//                     cout<<a[k];
//                 }
//                 cout<<"\n";
//             }
//             else Try(i+1);
//             used[j]=0;
//         }
//     }
// }
// int main(){
//     faster();
//     run(){
//         cin>>n;
//         Try(1);
//     }
// }
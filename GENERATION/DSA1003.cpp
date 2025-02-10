#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
// void next(){
//     int i=n-1;
//     while(i>=1 && x[i] > x[i+1]){
//         --i;
//     }
//     if(i==0){
//         for(int k=1;k<=n;k++)
//             cout<<k<<" ";
//     }
//     else{
//         int j=n;
//         while(x[i] > x[j]) j--;
//         swap(x[i],x[j]);
//         reverse(x+i+1,x+n+1);
//         for(int i=1;i<=n;i++){
//             cout<<x[i]<<" ";
//         }
//     }
// }
int n,a[1005];
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(next_permutation(a+1,a+n+1)){
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
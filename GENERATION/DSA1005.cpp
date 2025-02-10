#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    run(){
        int n; cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) a[i]=i+1;
        do{
            for(int i=0;i<n;i++) cout<<a[i];
            cout<<" ";
        }while(next_permutation(a.begin(),a.end()));
        cout<<endl;
    }
}
// int n,x[100];
// bool ok=0;
// void init(){
//     for(int i=1;i<=n;i++) x[i]=i;
// }
// void sinh(){
//     int i=n-1;
//     while(i>=1 && x[i]>x[i+1]){
//         i--;
//     }
//     if(i==0) ok=true;
//     else{
//         int j=n;
//         while(x[i]>x[j]) j--;
//         swap(x[i],x[j]);
//         reverse(x+i+1,x+n+1);
//     }
// }
// int main(){
//     faster();
//     run(){
//         cin>>n;
//          ok=0;
//         init();
//         while(!ok){
//             for(int i=1;i<=n;i++) cout<<x[i];
//             cout<<" ";
//             sinh();
//         }
//         cout<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
int main(){
    faster();
    int n; cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int m=a[0]*a[1];// toàn số âm
    int k=a[n-1]*a[n-2]*a[n-3];// 3 số dương lớn nhất
    int p=a[n-1]*a[n-2];// nếu a[n-3] là số âm
    int q=a[0]*a[1]*a[n-1];// 2 số đầu âm , số cuối dương
    cout<<max(max(m,k),max(p,q));
}
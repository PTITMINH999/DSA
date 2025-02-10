#include<bits/stdc++.h>
using namespace std;
int n,k,x[100];
void in(){
    for(int i=1;i<=k;i++) cout<<x[i];
    cout<<endl;
}
void Try(int i){
    // duyệt các khả năng mà x[i] có thể nhận
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) in();
        else Try(i+1);
    }
}
int main(){
    cin>>n>>k;
    Try(1);
}
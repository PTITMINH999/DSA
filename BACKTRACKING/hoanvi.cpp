#include<bits/stdc++.h>
using namespace std;
int n,x[100],used[100];
void in(){
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(used[j]==0){
            x[i]=j;
            used[j]=1;
            if(i==n) in();
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    cin>>n;
    Try(1);
}
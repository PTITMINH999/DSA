#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define run() int t; cin>>t; while(t--)
#define ll long long
struct job{
    int id,dl,profit;
    bool operator < (job a){
        return this->profit<a.profit;
    }
};
int main(){
    faster();
    run(){
        int n; cin>>n;
        job a[n];
        for(job &x:a) cin>>x.id>>x.dl>>x.profit;
        sort(a,a+n);
        int cnt=0,p=0;
        bool busy[1001]={};// lưu đơn vị thời gian đã làm rồi
        for(int i=n-1;i>=0;i--){
            // chọn công việc càng muộn càng tốt
            for(int j=a[i].dl;j>=1;j--){
                if(!busy[j]){
                    cnt++;
                    p+=a[i].profit;
                    busy[j]=1;
                    break;
                }
            }
        }
        cout<<cnt<<" "<<p<<endl;
    }    
}
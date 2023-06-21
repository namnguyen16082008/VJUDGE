#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,l,a,d=0,x[N*2]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    for (ll i=1;i<=n;i++){
        cin>>a;
        if (a==2 && l-d<2){
            cout<<"No";
            return 0;
        }
        d+=a+1;
    }
    cout<<"Yes";
}

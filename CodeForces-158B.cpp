#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a,x[5]={},ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x[a]++;
    }
    ans+=min(x[1],x[3]);
    x[1]-=ans,x[3]-=ans;
    ans+=x[4];
    ans+=x[2]/2;
    x[2]%=2;
    if (x[1]==0) cout<<ans+x[3]+x[2];
    else{
        ((x[2]*2+x[1])%4==0) ? cout<<ans+(x[2]*2+x[1])/4 : cout<<ans+(x[2]*2+x[1])/4+1;
    }
}

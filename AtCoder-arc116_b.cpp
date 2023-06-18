#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005,MOD=998244353;
ll n,s=0,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        ans=(ans+(s+a[i])*a[i])%MOD;
        s=(s*2+a[i])%MOD;
    }
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=50,inf=1e+18;
ll n,m,ans=inf,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=m;i<=n;i++) ans=min(ans,a[i]-a[i-m+1]);
    cout<<ans;
}

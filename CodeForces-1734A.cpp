#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300,inf=1e+18;
ll t,n,ans,a[N+5];
void Solve(){
    cin>>n;
    ans=inf;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=2;i<n;i++) ans=min(ans,a[i+1]-a[i-1]);
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

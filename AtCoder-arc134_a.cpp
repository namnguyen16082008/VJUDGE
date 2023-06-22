#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,l,w,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l>>w;
    for (ll i=1;i<=n;i++) cin>>a[i];
    a[0]=-w,a[n+1]=l;
    for (ll i=0;i<=n;i++) ans+=(a[i+1]-a[i]-1)/w;
    cout<<ans;
}

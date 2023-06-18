#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005,inf=1e+18;
ll n,x=-inf,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x=max(x,a[i]);
        ans+=x-a[i];
    }
    cout<<ans;
}

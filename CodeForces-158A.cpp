#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,k,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans+=((i<=k || a[i]>=a[k]) && a[i]>0);
    }
    cout<<ans;
}

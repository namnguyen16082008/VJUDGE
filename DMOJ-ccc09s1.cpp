#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,ans=0;
unordered_map <ll,ll> mp;
ll Cp(ll n){
    ll x=sqrt(n);
    return ((x*x==n)+1)%2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=sqrt(a)+Cp(a);i<=sqrt(b);i++) mp[i*i]++;
    for (ll i=cbrt(a);i<=cbrt(b);i++) ans+=mp[i*i*i]==1;
    cout<<ans;
}

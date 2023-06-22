#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=998244353;
ll n;
unordered_map <ll,ll> mp;
ll Solve(ll n){
    if (n<=4) return n;
    if (mp[n/2]==0) mp[n/2]=Solve(n/2);
    if (mp[(n+1)/2]==0) mp[(n+1)/2]=Solve((n+1)/2);
    return (mp[n/2]*mp[(n+1)/2])%MOD;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<Solve(n);
}

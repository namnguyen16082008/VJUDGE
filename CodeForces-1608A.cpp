#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=7919;
ll t,n,a[N+5]={};
vector <ll> v;
void Build(){
    ll i=2;
    while (i*i<=N){
        while (a[i]) i++;
        for (ll j=2;j<=N/i;j++) a[i*j]=1;
        i++;
    }
    for (ll i=2;i<=N;i++)
        if (!a[i]) v.push_back(i);
}
void Solve(){
    cin>>n;
    for (ll i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Build();
    cin>>t;
    while (t--) Solve();
}

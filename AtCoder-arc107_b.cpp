#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,k,ans=0,o=1,a[2*N+5];
void Build(){
    for (ll i=2;i<=2*n;i++) a[i]=min(n,i-1)-max(o,i-n)+1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    Build();
    for (ll i=2;i<=2*n;i++)
        if (i-k>=2 && i-k<=2*n) ans+=a[i]*a[i-k];
    cout<<ans;
}

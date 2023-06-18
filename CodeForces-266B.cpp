#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=55;
ll n,t;
char a[N];
void Solve(){
    for (ll i=n-1;i>=1;i--)
        if (a[i]=='B' && a[i+1]=='G'){
            swap(a[i],a[i+1]);
            i--;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t;
    for (ll i=1;i<=n;i++) cin>>a[i];
    while (t--) Solve();
    for (ll i=1;i<=n;i++) cout<<a[i];
}

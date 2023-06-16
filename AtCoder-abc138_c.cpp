#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n;
double a[N],ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    ans=a[1];
    for (ll i=2;i<=n;i++) ans=(ans+a[i])/2;
    cout<<ans;
}


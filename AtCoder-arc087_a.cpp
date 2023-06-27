#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,ans=0,d=1,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    a[0]=0;
    for (ll i=1;i<=n;i++){
        if (a[i]==a[i-1]) d++;
        else if (i>1){
            ans+=d-a[i-1]*(d>=a[i-1]);
            d=1;
        }
    }
    cout<<ans+d-a[n]*(d>=a[n]);
}

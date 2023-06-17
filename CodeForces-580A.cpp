#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,a[N],d=1,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=2;i<=n;i++)
        if (a[i]>=a[i-1]) d++;
        else{
            ans=max(ans,d);
            d=1;
        }
    cout<<max(ans,d);
}

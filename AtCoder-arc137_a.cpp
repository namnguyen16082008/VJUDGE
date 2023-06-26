#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll l,r,d=1500,ans=-inf;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>r;
    if (r-l<=d){
        for (ll i=l;i<r;i++)
            for (ll j=i+1;j<=r;j++)
                if (__gcd(i,j)==1) ans=max(ans,j-i);
        cout<<ans;
        return 0;
    }
    for (ll i=l;i<=l+d;i++)
        for (ll j=max(i+1,r-d);j<=r;j++)
            if (__gcd(i,j)==1) ans=max(ans,j-i);
    cout<<ans;
}

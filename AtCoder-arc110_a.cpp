#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=2;i<=n;i++) ans=ans*i/__gcd(ans,i);
    cout<<ans+1;
}

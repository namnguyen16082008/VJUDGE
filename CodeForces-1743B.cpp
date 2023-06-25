#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    cin>>n;
    for (ll i=1;i<=n;i++)
        if (i!=2) cout<<i<<" ";
    cout<<2<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

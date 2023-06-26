#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    ll a[n+5][m+5];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            cin>>a[i][j];
    for (ll i=1;i<=m;i++){
        for (ll j=1;j<=n;j++)
            cout<<a[j][i]<<" ";
        cout<<endl;
    }
}


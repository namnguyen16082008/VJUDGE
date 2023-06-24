#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100000;
ll n,x,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]!=x) cout<<a[i]<<" ";
    }
}

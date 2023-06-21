#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n;
pair <ll,ll> x[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x[i].first;
        x[i].second=i;
    }
    sort(x+1,x+n+1);
    for (ll i=1;i<=n;i++) cout<<x[i].second<<" ";
}

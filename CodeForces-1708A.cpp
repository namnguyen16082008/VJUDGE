#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll t,n,a[N+5];
void Solve(){
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=2;i<=n;i++){
        if (a[i]%a[1]!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100;
ll n,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]%=2;
    }
    for (ll i=1;i<=n;i++)
        if (a[i]!=a[i-1+n*(i==1)] && a[i]!=a[i+1-n*(i==n)]){
            cout<<i;
            return 0;
        }
}

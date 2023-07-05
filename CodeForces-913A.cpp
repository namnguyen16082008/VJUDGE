#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,ans=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        ans*=2;
        if (ans>m){
            cout<<m;
            return 0;
        }
    }
    cout<<m%ans;
}

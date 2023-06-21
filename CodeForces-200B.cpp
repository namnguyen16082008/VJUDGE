#include <bits/stdc++.h>
#define ll long long int

using namespace std;

double n,a,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        ans+=a;
    }
    cout<<fixed<<setprecision(10)<<ans/n;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,d,n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d>>n;
    for (ll i=1;i<=n;i++)
        if (i%a==0 || i%b==0 || i%c==0 || i%d==0) ans++;
    cout<<ans;
}

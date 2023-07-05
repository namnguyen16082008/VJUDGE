#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,m,a,x,y;
void Solve(){
    cin>>n>>m;
    x=0,y=0;
    for (ll i=1;i<=n;i++){
        cin>>a;
        x+=a;
    }
    for (ll i=1;i<=m;i++){
        cin>>a;
        y+=a;
    }
    if (x>y) cout<<"Tsondu"<<endl;
    else if (x<y) cout<<"Tenzing"<<endl;
    else cout<<"Draw"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,x,y;
void Solve(){
    cin>>x>>y>>a;
    (a>=x && a<y) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

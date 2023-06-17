#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b;
void Solve(){
    cin>>a>>b;
    if (a<b) cout<<'<'<<endl;
    else if (a>b) cout<<'>'<<endl;
    else cout<<'='<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

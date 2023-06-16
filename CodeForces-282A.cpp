#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,ans=0;
string x;
void Solve(){
    cin>>x;
    (x[0]=='+' || x[2]=='+') ? ans++ : ans--;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
    cout<<ans;
}

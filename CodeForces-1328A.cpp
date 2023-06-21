#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,a,b;
void Solve(){
    cin>>a>>b;
    cout<<(b-a%b)%b<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n;
void Solve(){
    cin>>n;
    if (n%2!=0) cout<<"Odd"<<endl;
    else if (n%4==0) cout<<"Even"<<endl;
    else cout<<"Same"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

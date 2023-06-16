#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t;
string s;
void Solve(){
    cin>>s;
    if (s.size()<=10) cout<<s<<endl;
    else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

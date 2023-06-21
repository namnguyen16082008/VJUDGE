#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,t;
ll ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>t;
    for (ll i=0;i<s.size();i++) ans+=s[i]!=t[i];
    cout<<ans;
}

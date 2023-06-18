#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans=0;
string Check(ll n){
    ostringstream d;
    d<<n;
    s=d.str();
    for (ll i=0;i<s.size();i++)
        if (s[i]!='4' && s[i]!='7') return "NO";
    return "YES";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='4' || s[i]=='7') ans++;
    cout<<Check(ans);
}

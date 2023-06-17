#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    n=(int(s[0])-48)*10+int(s[1])-48;
    (s[s.size()-2]=='A') ? n-=12*(n>=12) :n+=12*(n<12);
    if (n<10) cout<<0;
    cout<<n;
    for (ll i=2;i<s.size()-2;i++) cout<<s[i];
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans=0;
unordered_map <char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for (ll i=0;i<s.size();i++)
        if (s[i]>='a' && s[i]<='z'){
            ans+=mp[s[i]]==0;
            mp[s[i]]++;
        }
    cout<<ans;
}

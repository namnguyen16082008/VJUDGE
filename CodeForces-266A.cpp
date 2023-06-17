#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for (ll i=1;i<s.size();i++)
        ans+=(s[i]==s[i-1]);
    cout<<ans;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll d=0,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++){
        (s[i]=='R') ? d++ : d=0;
        ans=max(ans,d);
    }
    cout<<ans;
}

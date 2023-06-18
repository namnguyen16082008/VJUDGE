#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,ans="";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]!='B') ans+=s[i];
        else if (ans!="") ans.erase(ans.size()-1,1);
    cout<<ans;
}

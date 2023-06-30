#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
unordered_map <string,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>s;
        (!mp[s]) ? cout<<"OK"<<endl : cout<<s<<mp[s]<<endl;
        mp[s]++;
    }
}

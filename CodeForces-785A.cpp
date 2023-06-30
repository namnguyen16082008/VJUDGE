#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,ans=0;
string s;
unordered_map <string,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    for (ll i=1;i<=n;i++){
        cin>>s;
        ans+=mp[s];
    }
    cout<<ans;
}

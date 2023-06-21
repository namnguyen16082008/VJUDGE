#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,p,q,a;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>p;
    while (p--){cin>>a;mp[a]=1;}
    cin>>q;
    while (q--){cin>>a;mp[a]=1;}
    for (ll i=1;i<=n;i++)
        if (mp[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    cout<<"I become the guy.";
}

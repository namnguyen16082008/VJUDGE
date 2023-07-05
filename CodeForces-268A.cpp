#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll A=100;
ll n,x,y,ans=0,mp1[A+5]={},mp2[A+5]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>x>>y;
        ans+=(mp1[y]+mp2[x]);
        mp1[x]++;
        mp2[y]++;
    }
    cout<<ans;
}

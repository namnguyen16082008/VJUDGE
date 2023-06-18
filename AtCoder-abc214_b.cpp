#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll S,T,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>S>>T;
    for (ll i=0;i<=S;i++)
        for (ll j=0;j<=S-i;j++)
            for (ll k=0;k<=S-i-j;k++)
                ans+=i*j*k<=T;
    cout<<ans;
}

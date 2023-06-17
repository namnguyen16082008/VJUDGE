#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,x=0,y=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++){
            cin>>a;
            x+=a*(i==j);
            y+=a*(i+j==n+1);
        }
    cout<<abs(x-y);
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,o[N],x,y,a=-1e+18,b=1e+18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>o[i];
        if (o[i]<=b){b=o[i];y=i;}
    }
    for (ll i=n;i>=1;i--)
        if (o[i]>=a){a=o[i];x=i;}
    (x<y) ? cout<<x+n-y-1 : cout<<x+n-y-2;
}

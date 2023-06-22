#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,n=0,x[1005],y[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=1;i<=max(a,b);i++){
        x[i]=i;
        y[i]=-i;
    }
    if (a<b) for (ll i=b-1;i>=a;i--) x[i]+=x[i+1];
    if (a>b) for (ll i=a-1;i>=b;i--) y[i]+=y[i+1];
    for (ll i=1;i<=a;i++) cout<<x[i]<<" ";
    for (ll i=1;i<=b;i++) cout<<y[i]<<" ";
}

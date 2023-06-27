#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,x=0,y=0,ans=0,a[N+5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x+=a[i]%2==0;
        y+=a[i]%2==1;
        ans=__gcd(ans,abs(a[i]-a[i-1])*(i>1));
    }
    (x==n || y==n || ans>1) ? cout<<1 : cout<<2;
}

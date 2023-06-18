#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105;
ll n,a[N],ans=0,ans1=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i];
    }
    sort(a+1,a+n+1,greater<ll>());
    for (ll i=1;i<=n;i++){
        ans1+=a[i];
        if (ans1*2>ans){
            cout<<i;
            return 0;
        }
    }
}

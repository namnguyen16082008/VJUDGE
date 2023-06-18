#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[5];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=4;i++) cin>>a[i];
    sort(a+1,a+5);
    (a[4]==a[1]+a[2]+a[3] || a[4]+a[3]==a[2]+a[1] || a[4]+a[2]==a[3]+a[1] || a[4]+a[1]==a[3]+a[2]) ? cout<<"Yes" : cout<<"No";
}

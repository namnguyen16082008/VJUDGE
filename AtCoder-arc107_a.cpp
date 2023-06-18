#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=998244353;
ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    a=(a*(a+1)/2)%MOD;
    b=(b*(b+1)/2)%MOD;
    c=(c*(c+1)/2)%MOD;
    cout<<(((a*b)%MOD)*c)%MOD;
}

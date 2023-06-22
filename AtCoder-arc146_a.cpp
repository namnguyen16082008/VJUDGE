#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n;
string a[N];
bool comp(const string a, const string b){
    return (a.size()>b.size() || (a.size()==b.size() && a>b));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,comp);
    cout<<max(a[1]+a[2]+a[3],max(a[1]+a[3]+a[2],max(a[2]+a[1]+a[3],max(a[2]+a[3]+a[1],max(a[3]+a[1]+a[2],a[3]+a[2]+a[1])))));
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200000;
ll n,ans=0,a[N+5];
deque <ll> dq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++) dq.push_back(a[i]);
    while (dq.size()>1){
        if (dq.back()%dq.front()) dq.push_front(dq.back()%dq.front());
        dq.pop_back();
        ans++;
    }
    cout<<ans;
}


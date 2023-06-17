#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,a,t=-1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for (ll i=1;i<=n;i++){
        cin>>a;
        m-=a;
    }
    cout<<max(m,t);
}


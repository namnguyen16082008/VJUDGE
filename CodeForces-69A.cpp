#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b,c,x=0,y=0,z=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a>>b>>c;
        x+=a,y+=b,z+=c;
    }
    (x==0 && x==0 && z==0) ? cout<<"YES" : cout<<"NO";
}

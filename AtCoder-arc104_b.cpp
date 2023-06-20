#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=5005;
ll n,ans=0,a[N],t[N],c[N],g[N];
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    a[0]=0,t[0]=0,c[0]=0,g[0]=0;
    for (ll i=0;i<s.size();i++){
        a[i]=a[i-1],t[i]=t[i-1],c[i]=c[i-1],g[i]=g[i-1];
        if (s[i]=='A') a[i]++;
        else if (s[i]=='T') t[i]++;
        else if (s[i]=='C') c[i]++;
        else if (s[i]=='G') g[i]++;
    }
    for (ll i=0;i<s.size()-1;i++)
        for (ll j=i+1;j<s.size();j++)
            ans+=((a[j]-a[i-1]==t[j]-t[i-1]) && (c[j]-c[i-1]==g[j]-g[i-1]));
    cout<<ans;
}

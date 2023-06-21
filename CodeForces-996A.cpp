#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n,ans=0,a[10]={1,5,10,20,100},x[200005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n>100000){
        ans=(n-100000)/100;
        n-=ans*100;
    }
    x[0]=0;
    for (ll i=1;i<=n;i++) x[i]=inf;
    for (ll i=0;i<=4;i++)
        for (ll j=a[i];j<=n;j++)
            if (x[j-a[i]]!=inf) x[j]=min(x[j],x[j-a[i]]+1);
    cout<<x[n]+ans;
}

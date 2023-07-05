#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b,c;
ll x[30]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    for (ll i=0;i<a.size();i++) x[int(a[i])-64]++;
    for (ll i=0;i<b.size();i++) x[int(b[i])-64]++;
    for (ll i=0;i<c.size();i++) x[int(c[i])-64]--;
    for (ll i=1;i<=26;i++)
        if (x[i]!=0){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

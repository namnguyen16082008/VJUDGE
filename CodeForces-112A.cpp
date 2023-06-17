#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=0;i<a.size();i++)
        if (a[i]>='A' && a[i]<='Z') a[i]+=32;
    for (ll i=0;i<b.size();i++)
        if (b[i]>='A' && b[i]<='Z') b[i]+=32;
    if (a<b) cout<<-1;
    else if (a>b) cout<<1;
    else cout<<0;
}


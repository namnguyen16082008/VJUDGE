#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (a==b) cout<<c;
    else if (b==c) cout<<a;
    else if (c==a) cout<<b;
    else cout<<0;
}

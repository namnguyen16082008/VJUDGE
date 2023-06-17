#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>k;
    if (k<=a) cout<<k;
    else if (k<=a+b) cout<<a;
    else cout<<a-(k-a-b);
}

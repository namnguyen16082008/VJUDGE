#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>n;
    if (x*3<=y) cout<<n*x;
    else cout<<n/3*y+(n%3)*x;
}

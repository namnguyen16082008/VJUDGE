#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    (m>=2*n && m<=4*n && m%2==0) ? cout<<"Yes" : cout<<"No";
}

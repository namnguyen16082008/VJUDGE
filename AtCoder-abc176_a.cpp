#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x,t;;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x>>t;
    cout<<(n+x-1)/x*t;
}

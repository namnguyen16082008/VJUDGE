#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,w;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>n>>w;
    (k*w*(w+1)/2<=n) ? cout<<0 : cout<<k*w*(w+1)/2-n;
}

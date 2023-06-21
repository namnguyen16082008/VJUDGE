#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    (k<=(n+1)/2) ? cout<<k*2-1 : cout<<(k-(n+1)/2)*2;
}

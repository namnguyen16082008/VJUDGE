#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k,x,y,t=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>x>>y;
    cout<<min(n,k)*x+max(n-k,t)*y;
}

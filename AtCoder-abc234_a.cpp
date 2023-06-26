#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll f(ll x){
    return x*x+2*x+3;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<f(f(f(n)+n)+f(f(n)));
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    while (k--)
        (n%10==0) ? n/=10 : n--;
    cout<<n;
}

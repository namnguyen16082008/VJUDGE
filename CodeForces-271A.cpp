#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Check(ll n){
    unordered_map <ll,ll> mp;
    while (n>0){
        if (mp[n%10]==1) return 0;
        mp[n%10]=1;
        n/=10;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (Check(n+1)==0) n++;
    cout<<n+1;
}

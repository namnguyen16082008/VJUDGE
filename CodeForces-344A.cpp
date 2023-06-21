#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b=1e+18,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (n--){
        cin>>a;
        ans+=(a!=b);
        b=a;
    }
    cout<<ans;
}

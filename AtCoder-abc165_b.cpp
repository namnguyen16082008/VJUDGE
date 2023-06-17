#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=100,ans=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (x<n){
        ans++;
        x+=x/100;
    }
    cout<<ans;
}

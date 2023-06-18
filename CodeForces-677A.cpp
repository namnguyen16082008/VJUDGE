#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,h,a,ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>h;
    while (n--){
        cin>>a;
        (a<=h) ? ans++ : ans+=2;
    }
    cout<<ans;
}

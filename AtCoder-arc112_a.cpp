#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,l,r,x;
void Solve(){
    cin>>l>>r;
    if (l*2>r){
        cout<<0<<endl;
        return;
    }
    x=r-l*2+1;
    cout<<x*(x+1)/2<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

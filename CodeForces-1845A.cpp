#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,k,x;
void Solve(){
    cin>>n>>k>>x;
    if (x!=1){
        cout<<"YES"<<endl<<n<<endl;
        for (ll i=1;i<=n;i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    else if (k>=3){
        if (n==1){
            cout<<"NO"<<endl;
            return;
        }
        if (n%5!=1){
            cout<<"YES"<<endl<<n/5*2+(n%5)/2<<endl;
            for (ll i=1;i<=n/5;i++) cout<<2<<" "<<3<<" ";
            if (n%5==2) cout<<2<<endl;
            else if (n%5==3) cout<<3<<endl;
            else if (n%5==4) cout<<2<<" "<<2<<endl;
        }
        else{
            cout<<"YES"<<endl<<n/5*2<<endl;
            for (ll i=1;i<n/5;i++) cout<<2<<" "<<3<<" ";
            cout<<3<<" "<<3<<" "<<endl;
        }
    }
    else if (k<3){
        if (k==1 || n%2==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl<<n/2<<endl;
            for (ll i=1;i<=n/2;i++) cout<<2<<" ";
            cout<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}

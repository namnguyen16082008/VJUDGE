#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll inf=1e+18;
ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=3;i<=n;i*=3)
        for (ll j=5;j<=n;j*=5)
            if (i+j==n){
                ll s3=1,s5=1,a=0,b=0;
                while (s3<i){
                    s3*=3;
                    a++;
                }
                while (s5<j){
                    s5*=5;
                    b++;
                }
                cout<<a<<" "<<b<<endl;
                return 0;
            }
    cout<<-1;
}

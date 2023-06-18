#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll S,P;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>S>>P;
    for (ll i=1;i<=sqrt(P);i++)
        if (P%i==0 && i+P/i==S){
            cout<<"Yes";
            return 0;
        }
    cout<<"No";
}

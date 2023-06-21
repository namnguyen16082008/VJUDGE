#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char k;
ll n,x[30]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>k;
        (k>='a' && k<='z') ? x[int(k)-96]++ : x[int(k)-64]++;
    }
    for (ll i=1;i<=26;i++)
        if (x[i]==0){
            cout<<"NO";
            return 0;
        }
    cout<<"YES";
}

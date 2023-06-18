#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
ll Check(ll n){
    ostringstream d;
    d<<n;
    s=d.str();
    for (ll i=0;i<s.size();i++)
        if (s[i]!='4' && s[i]!='7') return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=sqrt(n);i++)
        if (n%i==0)
            if (Check(i)==1 || Check(n/i)==1){
                cout<<"YES";
                return 0;
            }
    cout<<"NO";
}

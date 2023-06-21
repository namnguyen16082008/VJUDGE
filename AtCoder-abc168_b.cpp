#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll k;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>s;
    if (s.size()<=k) cout<<s;
    else{
        for (ll i=0;i<k;i++) cout<<s[i];
        cout<<"...";
    }
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,k;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>s;
    s[k-1]+=32;
    cout<<s;
}

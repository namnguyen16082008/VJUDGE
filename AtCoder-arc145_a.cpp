#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    ((n==2 && s[0]==s[1]) || (n>2 && (s[0]=='B' || s[n-1]=='A'))) ? cout<<"Yes" : cout<<"No";
}

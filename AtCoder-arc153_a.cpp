#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll n,ans=100000;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    ans=ans+n-1;
    ostringstream d;
    d<<ans;
    s=d.str();
    cout<<s[0]<<s[0]<<s[1]<<s[2]<<s[3]<<s[3]<<s[4]<<s[5]<<s[4];
}

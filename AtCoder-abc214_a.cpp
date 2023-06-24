#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n<=125) cout<<4;
    else if (n<=211) cout<<6;
    else cout<<8;
}

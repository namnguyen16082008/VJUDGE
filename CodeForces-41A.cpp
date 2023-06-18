#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for (ll i=0;i<a.size()/2;i++) swap(a[i],a[a.size()-i-1]);
    (a==b) ? cout<<"YES" : cout<<"NO";
}

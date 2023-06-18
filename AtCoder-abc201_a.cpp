#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    (a[1]-a[0]==a[2]-a[1]) ? cout<<"Yes" : cout<<"No";
}

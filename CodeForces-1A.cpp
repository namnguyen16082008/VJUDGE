#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,a,x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>a;
    (n%a==0) ? x=n/a : x=n/a+1;
    (m%a==0) ? y=m/a : y=m/a+1;
    cout<<x*y;
}

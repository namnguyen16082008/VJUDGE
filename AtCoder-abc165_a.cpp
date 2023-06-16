#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,k;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>a>>b;
    ((a-1)/k==b/k) ? cout<<"NG" : cout<<"OK";
}

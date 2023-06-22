#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if (b*2>a+c) cout<<b*2-a-c;
    else cout<<(a+c)/2-b+2*((a+c)%2);
}

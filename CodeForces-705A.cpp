#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<n;i++)
        (i%2==1) ? cout<<"I hate that " : cout<<"I love that ";
    (n%2==1) ? cout<<"I hate it" : cout<<"I love it";
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if (a==0) cout<<"Silver";
    else if (b==0) cout<<"Gold";
    else cout<<"Alloy";
}


#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if (n<40) cout<<40-n;
    else if (n<70) cout<<70-n;
    else if (n<90) cout<<90-n;
    else cout<<"expert";
}

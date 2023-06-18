#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,l;
string s;
vector <string> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    while (n--){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for (auto x : v) cout<<x;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
string s;
unordered_map <string,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl<<"WA x "<<mp["WA"]<<endl<<"TLE x "<<mp["TLE"]<<endl<<"RE x "<<mp["RE"];

}


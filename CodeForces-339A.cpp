#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
vector <char> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]!='+') v.push_back(s[i]);
    sort(v.begin(),v.end());
    for (ll i=0;i<v.size();i++)
        (i!=v.size()-1) ? cout<<v[i]<<'+' : cout<<v[i];
}

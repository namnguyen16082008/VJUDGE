#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
string Check(string s){
    for (ll i=0;i<s.size()/2;i++)
        if (s[i]!=s[s.size()-i-1]) return "No";
    return "Yes";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    while (s[0]=='0' && s.size()>1) s.erase(0,1);
    while (s[s.size()-1]=='0' && s.size()>1) s.erase(s.size()-1,1);
    cout<<Check(s);
}

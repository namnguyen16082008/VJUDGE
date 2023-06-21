#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll Check(string s){
    ll o=0;
    for (ll i=0;i<s.size();i++) o+=(s[i]>='A' && s[i]<='Z');
    if (o==s.size()) return 1;
    else if (o==s.size()-1 && s[0]>='a' && s[0]<='z') return 2;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    if (Check(s)==1){
        for (ll i=0;i<s.size();i++)
            (s[i]>='A' && s[i]<='Z') ? cout<<char(s[i]+32) : cout<<s[i];
    }
    else if (Check(s)==2){
        (s[0]>='a' && s[0]<='z') ? cout<<char(s[0]-32) : cout<<s[0];
        for (ll i=1;i<s.size();i++)
            (s[i]>='A' && s[i]<='Z') ? cout<<char(s[i]+32) : cout<<s[i];
    }
    else cout<<s;
}

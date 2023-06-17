#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=s.size()-1;i>=0;i--)
        if (s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='o' || s[i]=='y' || s[i]=='A' || s[i]=='E' || s[i]=='U' || s[i]=='I' || s[i]=='O' || s[i]=='Y')
            s.erase(i,1);
    for (ll i=0;i<s.size();i++)
        (s[i]>='a' && s[i]<='z') ? cout<<'.'<<s[i] : cout<<'.'<<char(s[i]+32);
}

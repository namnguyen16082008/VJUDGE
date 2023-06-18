#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=s.size()-1;i>=0;i--)
        if (s[i]=='6') cout<<'9';
        else if (s[i]=='9') cout<<'6';
        else cout<<s[i];
}

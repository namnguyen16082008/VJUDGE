#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    (s[2]==s[3] && s[4]==s[5]) ? cout<<"Yes" : cout<<"No";
}

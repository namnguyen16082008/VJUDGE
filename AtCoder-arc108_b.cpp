#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
char k;
string s="";
void Check(){
    s+=k;
    if (s.size()<3) return;
    if (s[s.size()-1]=='x' && s[s.size()-2]=='o' && s[s.size()-3]=='f') s.erase(s.size()-3,3);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>k;
        Check();
    }
    cout<<s.size();
}

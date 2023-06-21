#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9'){
            cout<<"YES";
            return 0;
        }
    cout<<"NO";
}

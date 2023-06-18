#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll a[30]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++) a[int(s[i])-96]++;
    for (ll i=1;i<=26;i++)
        if (a[i]%2==1){
            cout<<"No";
            return 0;
        }
    cout<<"Yes";
}

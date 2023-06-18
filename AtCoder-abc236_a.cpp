#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a,b;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>a>>b;
    swap(s[a-1],s[b-1]);
    cout<<s;
}

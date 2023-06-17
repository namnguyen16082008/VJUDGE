#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    if (s[0]>='a' && s[0]<='z') s[0]-=32;
    cout<<s;
}

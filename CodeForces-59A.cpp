#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll a=0,b=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        (s[i]>='a' && s[i]<='z') ? a++ : b++;
    if (a>=b){
        for (ll i=0;i<s.size();i++)
            if (s[i]>='A' && s[i]<='Z')
                s[i]+=32;
    }
    else if (a<b){
        for (ll i=0;i<s.size();i++)
            if (s[i]>='a' && s[i]<='z')
                s[i]-=32;
    }
    cout<<s;
}

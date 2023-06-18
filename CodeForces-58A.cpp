#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll d=1;
string s;
char a[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    a[1]='h',a[2]='e',a[3]='l',a[4]='l',a[5]='o';
    for (ll i=0;i<s.size();i++)
        if (s[i]==a[d]){
            d++;
            if (d==6){
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO";
}

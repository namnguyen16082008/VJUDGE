#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s;
ll ans1=0,ans2=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='1'){
            ans1++;
            if (ans1>=7){
                cout<<"YES";
                return 0;
            }
            ans2=0;
        }
        else{
            ans2++;
            if (ans2>=7){
                cout<<"YES";
                return 0;
            }
            ans1=0;
        }
    cout<<"NO";
}
